#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root
 * Return: height of the binary tree or 0 if null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h1, h2;

	if (tree == NULL)
		return (0);
	h1 = 0;
	h2 = 0;
	if (tree->left)
		h1 = 1;
	if (tree->right)
		h2 = 1;
	h2 += binary_tree_height(tree->right);
	h1 += binary_tree_height(tree->left);
	if (h2 > h1)
		return (h2);
	return (h1);
}
