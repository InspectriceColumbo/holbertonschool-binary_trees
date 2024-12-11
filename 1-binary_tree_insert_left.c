#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: a pointer to the node to insert the left-child in
* @value: the value to store in the new node
* If @parent already has a left child, the new node must take its place, and..
* ..the old left-child must be set as the left-child of the new node
* Return: pointer to the created node, or NULL if failure/if @parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	node->left = parent->left;

	if (node->left != NULL)
	{
		node->left->parent = node;
	}

	parent->left = node;

	return (node);
}
