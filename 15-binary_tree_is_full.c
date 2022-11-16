#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if NULL or number full
 */

size_t binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) ^ (tree->right == NULL))
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (left && right)
			return 1;
		return 0;
	}
}
