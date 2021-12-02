#include "binary_trees.h"

/**
  * minValueNode - return the value with min value
  * @node: bst node
  * Return: the node
  */
bst_t *minValueNode(bst_t *node)
{
	bst_t *current = node;

	while (current && current->left != NULL)
		current = current->left;

	return (current);
}
/**
  * bst_remove - remove a node in a bst
  * @root: tree to traverse
  * @value: value of the node
  * Return: bst
  */
bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
		return (root);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			bst_t *tmp = root->left;

			free(root);
			return (tmp);
		}
		bst_t *tmp = minValueNode(root->right);

		root->n = tmp->n;
		root->right = bst_remove(root->right, tmp->n);
	}
	return (root);
}
