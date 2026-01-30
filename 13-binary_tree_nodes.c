#include "binary_trees.h"

/**
 * binary_tree_nodes - entry point
 * @tree: root
 *
 * Return: leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t ln, rn;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	ln = binary_tree_nodes(tree->left);
	rn = binary_tree_nodes(tree->right);

	return (ln + rn + 1);
}
