#include "binary_trees.h"

/**
 * binary_tree_node - create a new tree
 * @parent: parent node
 * @value: value of the node
 * Return: tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent == NULL)
	{
		new->parent = NULL;
		parent = new;
		return (parent);
	}
	else
	{
		new->parent = parent;
		return (new);
	}
}
