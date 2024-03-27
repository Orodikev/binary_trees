0-binary_tree_node.c
#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a binary tree node.
 * @parent: Parent node pointer
 * @value: The exact content of the created node
 *
 * Return: NULL incase of an error
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
