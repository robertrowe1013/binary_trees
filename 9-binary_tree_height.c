#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Recursively traverse each subtree, adding to LeftHeighT or RightHeighT
 * total. Then, compare values.
 * Return: Height (aka, tallest subtree)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lht, rht;

	lht = rht = 0;
	if (tree == NULL)
		return (0);
	if (tree->left)
		lht = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rht = binary_tree_height(tree->right) + 1;
	if (lht > rht)
		return (lht);
	return (rht);
}
