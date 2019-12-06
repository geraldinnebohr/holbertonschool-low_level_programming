#include "binary_trees.h"
#include <stdio.h>

/**
 * check_complete - function that checks if a binary tree is complete
 * @tree: pointer to the root node
 * @flag: aux var to se if there is more than 1 left node incomplete
 * Return: 1 if true or 0
 */

int check_complete(const binary_tree_t *tree, int *flag)
{
	int c;

	c = 1;
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
		c = 0;
	if (tree->left == NULL && tree->right == NULL)
		c = 1;
	if (tree->left != NULL && tree->right != NULL)
		c = 1;
	if (tree->left != NULL && tree->right == NULL)
		(*flag)++;
	c *= check_complete(tree->left, flag);
	c *= check_complete(tree->right, flag);
	return (c);
}

/**
 * binary_tree_is_complete - function that checks if binary tree is complete
 * @tree: pointer to the root
 * Return: 1 if true or 0 if false 5180920002136927  746  12/22
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int r, f;

	if (tree == NULL)
		return (0);
	f = 0;
	r = check_complete(tree, &f);
	if (f > 1)
		return (0);
	return (r);
}
