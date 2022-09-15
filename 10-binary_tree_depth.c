#include "binary_trees.h"

/**
* binary_tree_depth - function that measures the
* depth of a node in a binary tree
* @tree: const function binary_tree_t
* Return: 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent)
	{
		node++;
		tree = tree->parent;
	}
	return (node);
}
