#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: head node of the tree
 * Return: 1 if full 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}
	return (0);
}
