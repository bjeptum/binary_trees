#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is root
 * @node: pointer to the node to check
 * Return: 1 else, 0 on failure
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	else if (node->parent != NULL)
		return (0);
	else
		return (1);
}
