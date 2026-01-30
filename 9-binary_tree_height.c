#include "binary_trees.h"

/**
 * binary_tree_height - entry point
 * @tree: root
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	return ((hl > hr ? hl : hr) + 1);
}
