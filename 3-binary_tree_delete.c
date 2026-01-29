#include "binary_trees.h"

/**
 * binary_tree_delete - entry point
 * @tree: root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!node)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
