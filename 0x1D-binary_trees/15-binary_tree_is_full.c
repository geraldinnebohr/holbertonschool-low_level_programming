#include "binary_trees.h"

/**
 * emma_cansona_con_muchas_funciones - function that checks if its full
* @tree: pointer to the root
 * Return: 1 if true or 0 if false
 */

int emma_cansona_con_muchas_funciones(const binary_tree_t *tree)
{
	int f;

	f = 1;
	if (!tree)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		f = 0;
	if (tree->left == NULL && tree->right == NULL)
		f = 1;
	if (tree->left != NULL && tree->right != NULL)
		f = 1;

	f *= emma_cansona_con_muchas_funciones(tree->left);
	f *= emma_cansona_con_muchas_funciones(tree->right);

	return (f);
}

/**
 * binary_tree_is_full - function that checks if its full
 * @tree: pointer to the root
 * Return: 1 if true or 0 if false
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (emma_cansona_con_muchas_funciones(tree));
}
