#include "binary_trees.h"


/**
 * binary_tree_insert_right - Insert node to the left side
 * @parent: parent node
 * @value: value to be stored
 * Return: The memory adress of the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
		new->left = NULL;
	}
	else
	{
		new->right = parent->right;
		parent->right = new;
		new->left = NULL;
		(new->right)->parent = new;
	}

	return (new);
}
