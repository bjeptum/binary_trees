#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* first initialize size to 0*/
	size_t size = 0;

	if (tree)
	{
		/*adds 1 to the size variable to account for the current node*/
		/*recursively calls itself on the left and right subtrees of the*/
		/*current node and adds the returned sizes to the size variable*/
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
