#include "binary_trees.h"

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
