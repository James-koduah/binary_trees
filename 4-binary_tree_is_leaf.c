#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: The node we are to check if it is a leak
 * Return: return 1 if node is a leaf otherwise return 0
 * --------if node is also null return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int is_leaf = 0;

	if (node == NULL)
		return 0;

	if (node->left == NULL)
		is_leaf += 1;

	if (node->right == NULL)
		is_leaf += 1;

	if (is_leaf > 1)
		return 1;
	else
		return 0;

}
