#include "binary_trees.h"

/**
  * binary_tree_rotate_left - rotates a binary tree to the left
  * @tree: tree to rotate
  * Return: pointer to root of rotated tree
  */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot = tree->right;

	tree->right = pivot->left;
	pivot->left = tree;
	tree = pivot;

	return (tree);
}
