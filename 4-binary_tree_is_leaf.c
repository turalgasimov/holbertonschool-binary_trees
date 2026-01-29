#include "binary_trees.h"

/**
 * binary_tree_is_leaf - entry point
 * @node: node
 *
 * Return: 1/0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);
	else
		return (1);
}
