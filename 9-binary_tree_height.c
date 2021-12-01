#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree, 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			l_height = binary_tree_height(tree->left) + 1;
		if (tree->right)
			r_height = binary_tree_height(tree->right) + 1;

		if (l_height >= r_height)
			return (l_height);
		else
			return (r_height);
	}
	else
		return (0);
}
