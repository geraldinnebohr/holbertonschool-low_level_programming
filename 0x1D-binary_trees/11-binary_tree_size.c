#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root
 * Return: size of the binary tree or 0 if null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz;

	if (tree == NULL)
		return (0);
	sz = 0;
	if (tree)
		sz = 1;
	sz += binary_tree_size(tree->left);
	sz += binary_tree_size(tree->right);

	return (sz);
}
