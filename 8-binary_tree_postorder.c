#include "binary_trees.h"

/**
* binary_tree_postorder - function that goes through a binary
* tree using post-order traversal
* @tree: const function binary_tree_t
* @func: Character void (int)
* Return: Not return
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	if (func)
		func(tree->n);
	else
		return;
}
