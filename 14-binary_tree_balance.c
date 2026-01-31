#include "binary_trees.h"

/**
 * binary_tree_balance - entry point
 * @tree: root
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	lh = binary_tree_balance(tree->left);
	rh = binary_tree_balance(tree->right);

	if (lh > rh)
		lh -= 1;

	return (lh - rh + 1);
}
