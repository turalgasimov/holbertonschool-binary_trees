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

	hl = height(tree->left);
	hr = height(tree->right);

	return ((lHeight > rHeight ? lHeight : rHeight) + 1);
}
