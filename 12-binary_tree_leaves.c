#include "binary_trees.h"

/**
 * binary_tree_leaves - entry point
 * @tree: root
 *
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ll, rl;

	if (!tree)
		return (0);

	ll = binary_tree_leaves(tree->left);
	rl = binary_tree_leaves(tree->right);

	return (ll + rl + 1);
}
