#include "binary_trees.h"

/**
 * binary_tree_size - entry point
 * @tree: root
 *
 * Return: depth
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sl, sr;

	if (!tree)
		return (0);

	sl = binary_tree_size(tree->left);
	sr = binary_tree_size(tree->right);

	return (sl + sr + 1);
}
