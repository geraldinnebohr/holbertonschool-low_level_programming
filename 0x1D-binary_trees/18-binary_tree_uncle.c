#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left &&
	    node->parent->parent->left->n != node->parent->n)
		return (node->parent->parent->left);

	if (node->parent->parent->right &&
	    node->parent->parent->right->n != node->parent->n)
		return (node->parent->parent->right);
	return (NULL);
}
