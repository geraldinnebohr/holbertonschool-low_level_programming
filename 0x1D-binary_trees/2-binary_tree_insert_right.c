#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right child
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;

	if (parent->right == NULL)
	{
		new->right = NULL;
		new->parent = parent;
		parent->right = new;
		return (new);
	}
	else
	{
		old = parent->right;
		parent->right = new;
		new->right = old;
		new->parent = parent;
		old->parent = new;
		return (new);
	}
}
