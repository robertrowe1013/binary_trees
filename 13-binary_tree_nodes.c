#include "binary_trees.h"
/**
  * binary_tree_nodes - count nodes
  * @tree: tree
  *
  * Return: number of nodes
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		c++;
	if (tree->right == NULL && tree->left == NULL)
		return (c);
	c = c + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (c);
}
