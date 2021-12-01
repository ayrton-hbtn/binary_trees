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

/**
  * currentLevel - visit the curren level and process all nodes at that level
  * @tree: tree to traverse
  * @level: level in the tree
  * @func: pointer to a function to call for each node (prints node's value)
  */
void currentLevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		(*func)(tree->n);
	else if (level > 1)
	{
		currentLevel(tree->left, level - 1, (*func));
		currentLevel(tree->right, level - 1, (*func));
	}
}

/**
  * binary_tree_levelorder - goes through a binary tree level-order traversal
  * @tree: tree to traverse
  * @func: pointer to a function to call for each node (prints node's value)
  */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0, i = 0;

	if (func == NULL || tree == NULL)
		return;

	height = binary_tree_height(tree) + 1;

	for (; i <= height; i++)
		currentLevel(tree, i, (*func));
}
