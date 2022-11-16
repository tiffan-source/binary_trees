#include "binary_trees.h"


size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = 1 + binary_tree_height(tree->left);
	else
		left = 0;

	if (tree->right != NULL)
		right = 1 + binary_tree_height(tree->right);
	else
		right = 0;

	return (0 + (left > right ? left : right));
}
