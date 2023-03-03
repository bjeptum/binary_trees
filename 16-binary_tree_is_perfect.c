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

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is pefect, otherwise 0
 *         Also 0, if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_nodes(tree);

	if (nodes == ((1 << (height + 1)) - 1))
		return (1);
	return (0);
}
