#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree with the preorder method
 * @tree: pointer to the root node
 * @func: pointer to function to call for each node.
 * -------receives the value of the node as an argument
 * Return: void(nothing)
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
