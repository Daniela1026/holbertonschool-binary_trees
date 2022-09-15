#include "binary_trees.h"

/**
* binary_tree_insert_left - function that inserts a node as the
* left-child of another node
* @parent: Functions binary_tree_t
* @value: Character int
* Return: binary_tree_t*
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	if (parent->left)
	{
		node = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = node;
		node->parent = parent->left;
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
