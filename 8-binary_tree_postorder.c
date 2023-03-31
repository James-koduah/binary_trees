#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree using postorder method
 * @tree: Root node
 * @func: funtion to perform an operation on each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->left, func);
	func(tree->n);
}
