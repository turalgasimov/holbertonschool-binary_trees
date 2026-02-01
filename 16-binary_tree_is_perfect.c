#include "binary_trees.h"

/**
 * depth - entry point
 * @tree: root
 *
 * Return: d
 */
int depth(binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = depth(tree->left);
	right = depth(tree->right);
	return (1 + (left > right ? left : right));
}

/**
 * isPerfectRecur - entry point
 * @tree: root
 * @d: depth
 *
 * Return: d
 */
int isPerfectRecur(binary_tree_t *tree, int d)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (d == 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (isPerfectRecur(tree->left, d - 1)
		&& isPerfectRecur(tree->right, d - 1));
}

/**
 * binary_tree_is_perfect - entry point
 * @tree: root
 *
 * Return: 1/0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	d = depth(tree);
	return (isPerfectRecur(tree, d));
}
