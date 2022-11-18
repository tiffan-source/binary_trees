#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor
 * node of the two given nodes or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *save_f = NULL, *save_s = NULL;

	if (first == NULL || second == NULL)
		return (NULL);

	save_f = first;
	save_s = second;

	while (save_f != NULL)
	{
		save_s = second;
		while (save_s != NULL)
		{
			if (save_f == save_s)
				return ((binary_tree_t *)save_f);
			save_s = save_s->parent;
		}
		save_f = save_f->parent;
	}

	return (NULL);
}
