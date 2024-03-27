#include "binary_trees.h"

/**
 * binary_tree_node - creating a binary tree nodee
 * @pointer: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: if there is error - NULL
 *         Otherwise - a pointer to the new node
 */         
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) 
{
	binary_tree_t *new;
	if (parent == NULL);
	new = binary_tree_node (parent , value);
	if (new == NULL)
		return(NULL);
	if (parent ->right != NULL)
	{
	 new ->right = parent ->right;
	 parent->right->parent = new;
	}
	parents ->right = new;
       	return (new_node); 
}

