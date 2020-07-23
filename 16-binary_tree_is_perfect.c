#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check
 * Return: 1 for perfect, 0 otherwise. 
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int bd = bindepth(tree);

	if (tree == NULL)
		return (0);
	if (binary_tree_perf_check(tree, bd, 0))
		return (1);
	return (0);
}

/**
 * binary_tree_perf_check - recursive perfect tree check
 * @tree: tree to check
 * @depth: depth of tree
 * @level: level of current recursion
 * Return: hopefully
 */
int binary_tree_perf_check(const binary_tree_t *tree, int bd, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (bd == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return binary_tree_perf_check(tree->left, bd, level+1) &&
		binary_tree_perf_check(tree->right, bd, level+1);
}

/**
 * int bindepth - mesures depth of left branch
 * @tree: pointer
 * Return: depth!
 */
int bindepth(const binary_tree_t *tree)
{
	int bd = 0;

	while (tree)
	{
		bd++;
		tree = tree->left;
	}
	return (bd);
}
