#include "binary_trees.h"

/**
  * binary_tree_size - measures the size of a binary tree
  * @tree: tree to measure
  * Return: size of tree, 0 if tree is NULL
  */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *r = tree->right;
	binary_tree_t *t = r->left;

	r->left = tree;
	tree->right = t;

	return (r);
}
