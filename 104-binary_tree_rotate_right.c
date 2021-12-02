#include "binary_trees.h"

/**
  * binary_tree_rotate_right - rotates a binary tree to the right
  * @tree: tree to rotate
  * Return: pointer to root of rotated tree
  */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot = tree->left;

	if (!tree)
		return (NULL);

	if (!tree->left)
		return (NULL);

	tree->left = pivot->right;

	if (pivot->right)
		pivot->right->parent = tree;

	pivot->parent = tree->parent;

	pivot->right = tree;
	tree->parent = pivot;
	pivot->parent = NULL;

	return (pivot);
}
