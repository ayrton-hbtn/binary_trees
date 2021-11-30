#include "binary_trees.h"

/**
  * binary_tree_uncle - finds the uncle of a node
  * @node: node to check it's uncle
  * Return: uncle node or NULL
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent != NULL)
	{
		if (node->parent->parent != NULL)
		{
			if (node->parent->parent->left == node->parent)
				return (node->parent->parent->right);
			if (node->parent->parent->right == node->parent)
				return (node->parent->parent->left);
		}
	}
	return (NULL);
}
