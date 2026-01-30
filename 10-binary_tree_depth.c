#include "binary_trees.h"

/**
 * binary_tree_depth - entry point
 * @tree: root
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;

	if (!tree)
		return (0);
	
	if (!tree->parent)
		return (0);

	d = binary_tree_depth(tree->parent);
	return (d + 1);
}
