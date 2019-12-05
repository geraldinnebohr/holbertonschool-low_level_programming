#include "binary_trees.h"

/**
 * size - function that get the size of a binary tree
 * @tree: pointer to the root
 * Return: size of the binary tree
 */

int size(const binary_tree_t *tree)
{
	int sz;

	if (tree == NULL)
		return (0);
	sz = 0;
	if (tree)
		sz = 1;
	sz += size(tree->left);
	sz += size(tree->right);

	return (sz);
}

/**
 * binary_tree_is_perfect - function that checks if a tree is perfect
 * @tree: pointer to the root
 * Return: 1 if true or 0 if false
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int p1, p2;

	if (tree == NULL)
		return (0);
	p1 = size(tree->left);
	p2 = size(tree->right);
	if (p1 == p2)
		return (1);
	return (0);
}
