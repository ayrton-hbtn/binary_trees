#include "binary_trees.h"

/**
  * get_binary_tree_depth - measures the depth of a binary tree
  * @tree: tree to measure
  * Return: depth of tree, 0 if tree is NULL
  */
size_t get_binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + get_binary_tree_depth(tree->parent));
}

/**
  * binary_tree_depth - measures the depth of a binary tree
  * @tree: tree to measure
  * Return: depth of tree, 0 if tree is NULL
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth = get_binary_tree_depth(tree);

	return (depth - 1);
}
