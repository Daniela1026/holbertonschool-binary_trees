#include "binary_trees.h"

/**
* binary_tree_uncle - function that finds the uncle of a node
* @node: Character binary_tree_t
* Return: a pointer to the uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	uncle = parent->parent;
	if (uncle == NULL)
		return (NULL);
	if (uncle->left == parent)
		return (uncle->right);
	else
		return (uncle->left);
}
