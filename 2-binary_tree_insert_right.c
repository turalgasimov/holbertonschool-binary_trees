#include "binary_trees.h"

/**
 * binary_tree_insert_right - entry point
 * @parent: parent node
 * @value: value to store
 *
 * Return: node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;

	if (parent->right != NULL)
	{
		node->right = parent->left;
		parent->right->parent = node;
	} else
		node->right = NULL;

	parent->right = node;
	return (node);
}
