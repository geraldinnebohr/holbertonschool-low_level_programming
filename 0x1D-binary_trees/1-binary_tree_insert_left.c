#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left child
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->right = NULL;

	if (parent->left == NULL)
	{
		new->left = NULL;
		new->parent = parent;
		parent->left = new;
		return (new);
	}
	else
	{
		old = parent->left;
		parent->left = new;
		new->left = old;
		new->parent = parent;
		old->parent = new;
		return (new);
	}
}
