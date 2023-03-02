#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree, else O
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight;
	size_t rheight;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > right_height)
		return (lheight + 1);
	else
		return (rheight + 1);
}
