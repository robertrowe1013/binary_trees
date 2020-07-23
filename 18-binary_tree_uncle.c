#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the AUNT of a node.
 * @node: pointer to the node to find the Aunt
 * Return: Pointer to the Aunt node, or NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (node == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent)
	{
		tmp = node->parent->parent;
		if (tmp->left == node->parent)
			tmp = tmp->right;
		else if (tmp->right == node->parent)
			tmp = tmp->left;
	}
	return (tmp);
}
