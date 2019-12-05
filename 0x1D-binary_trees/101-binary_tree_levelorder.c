#include "binary_trees.h"

/**
 * subtrees - function that counts the subtrees
 * @node: pointer to the node to count
 * Return: number of subtrees
 */

int subtrees(const binary_tree_t *node)
{
	int left, right;

	if (node == NULL)
		return (0);
	left = subtrees(node->left);
	right = subtrees(node->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * print_level - function that prints the level of a binary tree
 * @tree: pointer to the root
 * @level: level of the binary tree
 * @func:pointer to a function to call for each node
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - function that uses the level-order traversal
 * @tree: pointer to the root
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int depth, i;

	if (tree == NULL || func == NULL)
		return;

	depth = subtrees(tree);
	for (i = 1; i <= depth; i++)
		print_level(tree, i, func);
}
