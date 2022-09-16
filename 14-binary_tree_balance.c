#include "binary_trees.h"

/**
* binary_tree_balance_height - balance factor of a binary tree
* @tree: const function binary_tree_t
* Return: height or if tree is NULL return 0
*/

int binary_tree_balance_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_balance_height(tree->left) > binary_tree_balance_height(tree->right))
		return (1 + binary_tree_balance_height(tree->left));
	else
		return (1 + binary_tree_balance_height(tree->right));
}

/**
* binary_tree_balance - function that measures the balance factor of a binary tree
* @tree: const function binary_tree_t
* Return: If tree is NULL, return 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_balance_height(tree->left) -
			binary_tree_balance_height(tree->right));
}
