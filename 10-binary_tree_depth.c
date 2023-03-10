#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth, else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t l_Depth = 0;

	if (tree->parent)
	{
		l_Depth = 1 + binary_tree_depth(tree->parent);
	}
	return (l_Depth);
}
