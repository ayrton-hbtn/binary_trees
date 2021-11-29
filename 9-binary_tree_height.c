#include "binary_trees.h"

/**
  * max - returns max between two numbers
  * @a: first number
  * @b: second number
  * Return: max between a and b
  */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
  * get_height - measures the height of a binary tree
  * @tree: tree to measure
  * Return: height of tree, 0 if tree is NULL
  */
size_t get_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(get_height(tree->left), get_height(tree->right)));
}

/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: tree to measure
  * Return: height of tree, 0 if tree is NULL
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = get_height(tree);

	return (height - 1);
}
