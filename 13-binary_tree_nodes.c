#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * NULL pointer is not a node
 * Return: count of nodes, else 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_nodes_left;
	size_t count_nodes_right;
	size_t total_nodes;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count_nodes_left = binary_tree_nodes(tree->left);
	count_nodes_right = binary_tree_nodes(tree->right);
	total_nodes = 1 + count_nodes_left + count_nodes_right;
	return (total_nodes);
}
