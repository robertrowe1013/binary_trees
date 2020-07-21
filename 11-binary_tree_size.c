#include "binary_trees.h"
/**
  * binary_tree_size - Measures the size of a binary tree
  * @tree: pointer to the root node of the tree to measure the height.
  * Traverses tree using preorder, counting each node.
  * Return: Size of tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree == NULL)
		return (0);
	c = binary_tree_size(tree->left);
	c += binary_tree_size(tree->right);
	return (c + 1);
}
