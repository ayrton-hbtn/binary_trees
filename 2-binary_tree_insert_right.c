#include "binary_trees.h"

/**
  * binary_tree_insert_right - inserts a new node as right child
  * @parent: parent node to insert new node at right
  * @value: value of new node
  * Return: new node, NULL if failed or if parent doesn't exist
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	if (parent == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = value;
	new->parent = parent;

	if (parent->right != NULL)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;
	new->parent = parent;

	return (new);
}
