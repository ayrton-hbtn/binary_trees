#include "binary_trees.h"

/**
  * binary_tree_insert_left - inserts a new node as left child
  * @parent: parent node to insert new node at left
  * @value: value of new node
  * Return: new node, NULL if failed or if parent doesn't exist
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;
	new->parent = parent;

	return (new);
}
