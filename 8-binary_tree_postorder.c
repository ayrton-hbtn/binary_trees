#include "binary_trees.h"

/**
  * binary_tree_postorder - goes through a binary tree post-order traversal
  * @tree: tree to traverse
  * @func: pointer to a function to call for each node (prints node's value)
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, (*func));
		binary_tree_postorder(tree->right, (*func));
		(*func)(tree->n);
	}
}
