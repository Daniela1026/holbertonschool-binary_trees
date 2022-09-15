#include "binary_trees.h"

/**
* binary_tree_node - function that creates a binary tree node
* @parent: Function binary_tree_t
* @value: Character int
* Return: a pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = newnode->right = NULL;

	return (newnode);
}
