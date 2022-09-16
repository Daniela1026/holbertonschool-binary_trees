#include "binary_trees.h"

/**
* binary_tree_is_full - check if tree is full
* @tree: const function binary_tree_t
* Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
	return (0);
}

/**
* binary_tree_size - return size fo tree
* @tree: const function binary_tree_t
* Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}


/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
* @tree: const function binary_tree_t
* Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 1)
		if (binary_tree_size(tree->left) - binary_tree_size(tree->right) == 0)
			return (1);
	return (0);
}
