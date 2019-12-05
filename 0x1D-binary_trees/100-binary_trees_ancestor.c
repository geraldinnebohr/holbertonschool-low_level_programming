#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest common ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *emm, *pocoyo;

	if (first == NULL || second == NULL)
		return (NULL);

	for (emm = first; emm; emm = emm->parent)
	{
		for (pocoyo = second; pocoyo; pocoyo = pocoyo->parent)
		{
			if (emm->n == pocoyo->n)
				return ((binary_tree_t *)emm);
		}
	}
	return (NULL);
}
