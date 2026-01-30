#include "binary_trees.h"

/**
 * binary_tree_balance - entry point
 * @tree: root
 *
 * Return: leaves
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (!tree)
		return (0);

	if (tree->left && !tree->right)
		return (1);

	if (!tree->left && tree->right)
		return (-1);

	lh = binary_tree_balance(tree->left);
	rh = binary_tree_balance(tree->right);

	return (lh - rh);
}
