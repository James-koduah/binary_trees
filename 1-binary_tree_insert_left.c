#include "binary_trees.h"


/**
 * binary_tree_insert_left - Insert node to the left side
 * @parent: parent node
 * @value: value to be stored
 * Return: The memory adress of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));	
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL;
		new->right = NULL;
	}
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->right = NULL;
		(new->left)->parent = new;
	}

	return (new);
}
