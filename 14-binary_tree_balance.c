#include "binary_trees.h"

/**
 * binary_tree_height - height of the binary tree.
 * @tree: is a pointer to the root node
 * Return: If node is NULL, return
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (!tree)
	if (!tree)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height >= r_height)
		return (l_height + 1);

	return (r_height + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (!tree)
	if (!tree)
		return (0);

	if (tree->left)
		l_height = binary_tree_height(tree->left);

	if (tree->right)
		r_height = binary_tree_height(tree->right);

	return (l_height - r_height);
}
