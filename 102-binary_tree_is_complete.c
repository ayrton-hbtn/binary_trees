#include "binary_trees.h"

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
  * binary_tree_is_complete_check - https://www.javatpoint.com/binary-tree
  * @tree: tree to check if is complete
  * @index: start index
  * @num_nodes: total nodes of the tree
  * Return: 1 if complete, 0 if not
  */
int binary_tree_is_complete_check(const binary_tree_t *tree,
		int index, int num_nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= num_nodes)
		return (0);

	return (binary_tree_is_complete_check(tree->left, 2 * index + 1, num_nodes)
			&& binary_tree_is_complete_check(tree->right, 2 * index + 2, num_nodes));
}

/**
  * binary_tree_is_complete - check if binary tree is complete
  * @tree: tree to check if is complete
  * Return: 1 if complete, 0 if not
  */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int ret;
	int index = 0;
	int num_nodes = binary_tree_size(tree);

	ret = binary_tree_is_complete_check(tree, index, num_nodes);

	return (ret);
}
