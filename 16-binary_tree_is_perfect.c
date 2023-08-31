#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height; 
	size_t max_nodes;

	if (tree == NULL)
	{
		return (0);
	}

	height = binary_tree_height(tree);
	max_nodes = (1 << height) - 1;

	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right) &&
	(max_nodes == binary_tree_size(tree)));

}