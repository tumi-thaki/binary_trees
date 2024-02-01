#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor of the node.
 *
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return ((int)(binary_tree_height(tree->left) -
					binary_tree_height(tree->right)));
	return (0);
}


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left_height > right_height) ? left_height : right_height);
	}

	return (0);
}
