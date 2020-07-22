#include "binary_trees.h"
/**
  * binary_tree_is_full - check if full
  * @tree: tree
  *
  * Return: 1 if full, else 0
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
		if (left_full == 0 || right_full == 0)
			return (0);
		else
			return (1);
	}
	return (0);
}
