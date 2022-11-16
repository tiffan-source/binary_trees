#include "binary_trees.h"

/**
 * my_pow - find base^pow
 *
 * @nbr: base
 * @pow: power
 * Return: nbr^pow
 */

int my_pow(int nbr, int pow)
{
	if (pow == 0)
		return (1);
	return (nbr * my_pow(nbr, pow - 1));
}

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
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if NULL or size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if NULL or number full
 */

size_t binary_tree_is_perfect(const binary_tree_t *tree)
{
	int current_size, full_size;

	if (tree == NULL)
		return (0);

	current_size = binary_tree_size(tree);
	full_size = my_pow(2, binary_tree_height(tree) + 1) - 1;

	return (full_size == current_size);
}
