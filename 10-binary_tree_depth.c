#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth of the node in int
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree->parent != NULL)
	{
		depth += binary_tree_depth(tree->parent); 
		depth += 1;
	}
	return depth;
}
