#include "binary_trees.h"

/**
* binary_tree_insert_right - function that inserts a node as
* the right-child of another node
* @parent: Function binary_tree_t
* @value: Character int
* Return: a pointer to the created node, or NULL on
* failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *node;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	if (!parent->right)
	{
		parent->right = new;
		new->n = value;
		new->left = NULL;
		new->right = NULL;
		new->parent = parent;
	}
	else
	{
		node = parent->right;
		parent->right = new;
		new->n = value;
		new->left = NULL;
		new->right = node;
		new->parent = parent;
		node->parent = new;
	}

	return (new);
}
