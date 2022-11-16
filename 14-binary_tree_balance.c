#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
 */

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


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if NULL balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);

	if (tree->left)
		h_left = 1 + binary_tree_height(tree->left);
	else
		h_left = 0;

	if (tree->right)
		h_right = 1 + binary_tree_height(tree->right);
	else
		h_right = 0;

	return (h_left - h_right);
}
