#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: pointer to the node to find the sibling
 * Checks parent's left and right nodes, if they exist & aren't node
 * Then set pointer to it. Else DAT NULL.
 * Return: Pointer to the sibling node, or NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL ||
			node->parent->left == NULL ||
			node->parent->right == NULL)
		return (NULL);
	if (node->parent->left == node)
		tmp = node->parent->right;
	else
		tmp =  node->parent->left;
	return (tmp);
}
