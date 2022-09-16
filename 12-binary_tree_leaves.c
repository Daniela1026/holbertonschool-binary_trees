#include "binary_trees.h"

/**
* binary_tree_leaves - function that counts the leaves
* in a binary tree
* @tree: const function binary_tree_t
* Return: If tree is NULL, the function must return 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_l = 0;
	size_t right_l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else
	{
		left_l = binary_tree_leaves(tree->left);
		right_l = binary_tree_leaves(tree->right);

		return (left_l + right_l);
	}
}
