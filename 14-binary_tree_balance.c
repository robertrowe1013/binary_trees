#include "binary_trees.h"
/**
  * binary_tree_balance - balance
  * @tree: tree
  *
  * Return: balance
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;
	balance = left_height - right_height;
	return (balance);
}
