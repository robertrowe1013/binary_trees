#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Recursively traverse up tree to root, adding 1 to total.
 * Return: Depth (number of edges from the root to the node)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
