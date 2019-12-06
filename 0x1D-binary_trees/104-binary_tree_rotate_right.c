#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return:  pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *nw_root, *node, *aux;

	if (!tree)
		return (NULL);
	nw_root = tree->left;
	if (nw_root->right)
		aux = nw_root->right;
	else
		aux = NULL;
	node = tree;

	nw_root->right = node;
	node->parent = nw_root;

	nw_root->parent = NULL;

	if (aux)
	{
		node->left = aux;
		aux->parent = node;
	}
	else
	{
		node->right = NULL;
		node->left = NULL;
	}

	tree = nw_root;
	return (tree);
}
