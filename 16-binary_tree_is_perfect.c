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
  * binary_tree_size - measures the size of a binary tree
  * @tree: tree to measure
  * Return: size of tree, 0 if tree is NULL
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
  * _pow - calculates base to the power of exp
  * @x: base number
  * @y: exponent
  * Return: x to the power of y
  */
size_t _pow(size_t x, size_t y)
{
	size_t result = 1;

	for (; y > 0; y--)
		result = result * x;

	return (result);
}

/**
  * binary_tree_is_perfect - checks if a binary tree is perfect
  * @tree: tree to check
  * Return: 1 if perfect, 0 otherwise
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = get_height(tree) - 1;
	size_t n = binary_tree_size(tree);

	if (tree == NULL)
		return (0);

	if (_pow(2, h + 1) - 1 == n)
		return (1);

	return (0);
}
