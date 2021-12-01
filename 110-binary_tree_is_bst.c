#include "binary_trees.h"

/**
  * binary_tree_is_bst_valid - check if is a bst
  * @tree: tree to traverse
  * @nodeVal: jk
  * @lessThan: jk
  * Return: 1 if bst, 0 if not
  */
int binary_tree_is_bst_valid(binary_tree_t *tree, int nodeVal, int lessThan)
{
	if (tree != NULL)
	{
		if (lessThan)
		{
			if (tree->n >= nodeVal)
				return (0);
			return (binary_tree_is_bst_valid(tree->left, nodeVal, lessThan) && binary_tree_is_bst_valid(tree->right, nodeVal, lessThan));
		}
		else
		{
			if (tree->n <= nodeVal)
				return (0);
			return (binary_tree_is_bst_valid(tree->left, nodeVal, lessThan) && binary_tree_is_bst_valid(tree->right, nodeVal, lessThan));
		}
	}
	return (1);
}
/**
  * binary_tree_is_bst - check if is a bst
  * @tree: tree to traverse
  * Return: 1 if bst, 0 if not
  */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (binary_tree_is_bst_valid(tree->left, tree->n, 1) && binary_tree_is_bst_valid(tree->right, tree->n, 0))
			return (binary_tree_is_bst(tree->left) && binary_tree_is_bst(tree->right));
		else
			return (0);
	}
	return (1);
}
