#include "binary_trees.h"

/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: tree to measure
  * Return: height of tree, 0 if tree is NULL
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;
	const binary_tree_t *tmp = tree;

	if (tree != NULL)
	{
		while (tmp->left)
		{
			tmp = tmp->left;
			height_l++;
		}

		tmp = tree;

		while (tmp->right)
		{
			tmp = tmp->right;
			height_r++;
		}
	}

	if (height_l >= height_r)
		return (height_l);
	return (height_r);
}
