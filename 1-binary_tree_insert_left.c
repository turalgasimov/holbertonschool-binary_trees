#include "binary_trees.h"

/**
 * binary_tree_insert_left - entry point
 * @parent: parent node
 * @value: value to store
 *
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	} else
		node->left = NULL;

	parent->left = node;
	return (node);
}
