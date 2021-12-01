#include "binary_trees.h"

/**
  * binary_tree_insert_left - inserts a new node as left child
  * @parent: parent node to insert new node to
  * @value: value of new node
  * Description: If parent node already has a left child, the new node
  *     must take its place, and the old left-child must be set
  *     as the left-child of the new node.
  * Return: new node, NULL if failed or if parent doesn't exist
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *l_child;

	if (!parent)
		return (NULL);

	l_child = parent->left;
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (l_child)
		l_child->parent = new;

	new->left = l_child;
	parent->left = new;

	return (new);
}
