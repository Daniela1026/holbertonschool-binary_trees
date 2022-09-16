#include "binary_trees.h"

/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree: const function binary_tree_t
* Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_full(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if ((tree->right) && (tree->left))
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
