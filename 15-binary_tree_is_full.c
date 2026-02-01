#include "binary_trees.h"

/**
 * binary_tree_is_full - entry point
 * @tree: root
 *
 * Return: 1/0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if ((tree->left && tree->right || !tree->left && !tree->right))
		return (1);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	return (l && r);
}
