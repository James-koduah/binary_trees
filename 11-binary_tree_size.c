#include "binary_trees.h"

/**
 * binary_tree_size - calculate the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes in the tree
 * --------if tree is null return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);

	return (size);
}
