#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes
 * with at least one child on a binary tree
 * @tree: root of the tree
 * Return: number of nodes
 * --------if tree is null return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		node += binary_tree_nodes(tree->left);
	if (tree->right)
		node += binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		node = 0;

	return (node);

}
