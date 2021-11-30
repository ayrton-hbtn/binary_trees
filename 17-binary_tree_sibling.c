#include "binary_trees.h"

/**
  * binary_tree_sibling - finds the sibling of a node
  * @node: root of tree to check
  * Return: binary_tree_t sibling or NULL if not
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent != NULL)
	{
		if (node->parent->right && node->parent->left)
		{
			if (node->parent->right == node)
				return (node->parent->left);
			if (node->parent->left == node)
				return (node->parent->right);
		}
	}
	return (NULL);
}
