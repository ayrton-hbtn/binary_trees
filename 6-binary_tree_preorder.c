#include "binary_trees.h"

/**
  * binary_tree_preorder - goes through a binary tree using pre-order traversal
  * @tree: tree to traverse
  * @func: pointer to a function to call for each node (prints node's value)
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;

	if (tree != NULL)
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, (*func));
		binary_tree_preorder(tree->right, (*func));
	}
}
