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
  * binary_trees_ancestor - finds the lowest common ancestor of two nodes
  * @first: first node
  * @second: second node
  * Return: common ancestor node, or NULL if not found
  */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	size_t h_first, h_second;

	if (!first || !second)
		return (NULL);
	if (!first->parent || !second->parent)
		return (NULL);

	if (first->parent == second->parent)
		return (first->parent);

	if (first == second->parent)
		return ((binary_tree_t *)(first));
	if (second == first->parent)
		return ((binary_tree_t *)(second));

	h_first = binary_tree_height(first) + 1;
	h_second = binary_tree_height(second) + 1;
	if (h_first < h_second)
		return (binary_trees_ancestor(first->parent, second));

	return (binary_trees_ancestor(first, second->parent));
}
