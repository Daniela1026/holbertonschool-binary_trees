#include "binary_trees.h"

/**
* binary_tree_nodes - function that counts the nodes with at
* least 1 child in a binary tree
* @tree: const function binary_tree_t
* Return: If tree is NULL, the function must return 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_l;
	size_t right_l;
	size_t total = 0;

	if (!tree || (!tree->right && !tree->left))
	    return (0);

	if (tree->left || tree->right)
	{
		left_l = binary_tree_nodes(tree->left) + 1;
		right_l = binary_tree_nodes(tree->right) + 1;
		total = left_l + right_l - 1;
	}

	return (total);
}
