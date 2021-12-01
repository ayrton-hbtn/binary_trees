#include "binary_trees.h"

/**
  * max - returns max between two numbers
  * @a: first number
  * @b: second number
  * Return: max between a and b
  */
int max(size_t a, size_t b)
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
int get_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(get_height(tree->right), get_height(tree->left)));
}

/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * @tree: tree to measure
  * Return: balance factor
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int balance = 0;

	int left_t = get_height(tree->left);
	int right_t = get_height(tree->right);

	balance = left_t - right_t;

	return (balance);
}
