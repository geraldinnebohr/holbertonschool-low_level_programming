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
 * binary_tree_balance - function that measures the balance factor of a tree
 * @tree: pointer to the root
 * Return: balance factor or 0 if null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance, l_lt, l_rt;

	if (tree == NULL)
		return (0);
	l_lt = subtrees(tree->left);
	l_rt = subtrees(tree->right);

	balance = l_lt - l_rt;
	return (balance);
}
