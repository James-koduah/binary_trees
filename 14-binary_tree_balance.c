#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height of a tree from a node
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;
	else
		left_height = 0;

	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;
	else
		right_height = 0;

	return left_height - right_height;

}
