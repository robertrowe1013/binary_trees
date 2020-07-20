#include "binary_trees.h"
/**
  * binary_tree_delete - delete tree
  * @tree: tree
  */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_branch;
	binary_tree_t *right_branch;

	if (tree == NULL)
		return;
	left_branch = tree->left;
	right_branch = tree->right;
	if (left_branch != NULL)
		binary_tree_delete(left_branch);
	if (right_branch != NULL)
		binary_tree_delete(right_branch);
	free(tree);
}
