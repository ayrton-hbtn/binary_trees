#include "binary_trees.h"

/**
  * binary_tree_is_bst - check if is a bst
  * @tree: tree to traverse
  * Return: 1 if bst, 0 if not
  */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left && tree->left->n > tree->n)
		return (0);
	if (tree->right && tree->right->n < tree->n)
		return (0);
	if (!binary_tree_is_bst(tree->left) || !binary_tree_is_bst(tree->right))
		return (0);
	return (1);
}
