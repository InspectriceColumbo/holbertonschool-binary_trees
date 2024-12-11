#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes of
 * Return: Number of nodes that have at least 1 child, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		if (tree->right)
		{
			count = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		}
	}

	else
		count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (count);
}