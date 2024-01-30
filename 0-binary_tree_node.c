#include "binary_trees.h"

/**
 * binary_tree_node - To create a binary tree node
 * @parent: A pointer to the root
 * @value: The root data
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;

	return (newnode);
}
