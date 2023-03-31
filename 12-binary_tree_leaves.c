#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves on a binary tree
 * @tree: root of the tree
 * Return: number of leaves
 * --------if tree is null return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaf = 1;
	if (tree->left)
		leaf += binary_tree_leaves(tree->left);
	if (tree->right)
		leaf += binary_tree_leaves(tree->right);

	return (leaf);

}
