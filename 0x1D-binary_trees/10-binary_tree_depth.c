#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: pointer to the node
 * Return: depth of a node or 0 if null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = 0;
	if (tree->parent != NULL)
		depth = 1;
	else
		depth = 0;
	depth += binary_tree_depth(tree->parent);
	return (depth);
}
