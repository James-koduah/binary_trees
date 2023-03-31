#include "binary_trees.h"

/**
 * binary_tree_is_root - Check to see if node is the root
 * @node: The node we are to check
 * Return: 1 if the node is the root otherwise 0
 * --------return 0 if node is null
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
