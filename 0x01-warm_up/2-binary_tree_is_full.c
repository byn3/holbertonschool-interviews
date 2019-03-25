#include "binary_trees.h"

/**
* binary_tree_is_full - checks to see if this is a full tree
* @tree: a pointer to the tree
*
* Return: an int
* Description: Complete is full and leftmost
* Full tree is either 0 or 2 children
* perfect is perfect.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* if empty node return 0 */
	if (!tree)
		return (0);
	/* we hit a node with no kids, it is complete node.*/
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* we hit a node with 2 kids */
	else if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	/* NOT FULL. IT HAD ONE KID BUT NOT THE OTHER!! WEE WOOO WEE WOO */
	return (0);
}
