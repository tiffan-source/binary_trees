#include "binary_trees.h"


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
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 if NULL or leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0 if NULL or number of node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
