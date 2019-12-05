#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the siblings of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->parent->left->n != node->n)
		return (node->parent->left);

	if (node->parent->right && node->parent->right->n != node->n)
		return (node->parent->right);
	return (NULL);
}
