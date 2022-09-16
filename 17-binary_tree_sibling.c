#include "binary_trees.h"

/**
* binary_tree_sibling - function that finds the sibling of a node
* @node: Function binary_tree_t
* Return: a pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *nod;

	if (!node || !node->parent)
		return (NULL);
	nod = node->parent;
	if (nod->left == node)
	{
		if (!nod->right)
			return (NULL);
		return (nod->right);
	}
	else
	{
		if (!nod->left)
			return (NULL);
		return (nod->left);
	}
}
