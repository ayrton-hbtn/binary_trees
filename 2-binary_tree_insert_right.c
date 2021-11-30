#include "binary_trees.h"

/**
  * binary_tree_insert_right - inserts a new node as right child
  * @parent: parent node to insert new node to
  * @value: value of new node
  * Description: If parent node already has a right child, the new node
  *	must take its place, and the old right-child must be set
  *	as the right-child of the new node.
  * Return: new node, NULL if failed or if parent doesn't exist
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *r_child = parent->right;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (r_child)
		r_child->parent = new;

	new->right = r_child;
	parent->right = new;

	return (new);
}
