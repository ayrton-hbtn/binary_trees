#include "binary_trees.h"

/**
  * binary_tree_rotate_left - rotates a binary tree to the left
  * @tree: tree to rotate
  * Return: pointer to root of rotated tree
  */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot = tree->right;

	if (!tree)
		return (NULL);

	if (!tree->right)
		return (NULL);

	tree->right = pivot->left;

	if (pivot->left)
		pivot->left->parent = tree;

	pivot->parent = tree->parent;

	pivot->left = tree;
	tree->parent = pivot;
	pivot->parent = NULL;

	return (pivot);
}
