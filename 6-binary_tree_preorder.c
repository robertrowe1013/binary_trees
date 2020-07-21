#include "binary_trees.h"
/**
  * binary_tree_preorder - traverse tree preordered
  * @tree: tree to be traversed
  * @func: print node value
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	int n;
	binary_tree_t *left_node;
	binary_tree_t *right_node;

	if (tree == NULL || func == NULL)
		return;
	n = tree->n;
	func(n);
	left_node = tree->left;
	right_node = tree->right;
	binary_tree_preorder(left_node, func);
	binary_tree_preorder(right_node, func);
}
