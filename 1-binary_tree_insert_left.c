#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @pointer: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: if there is error - NULL
 *         Otherwise - a pointer to the new node
 * Description: Function must return a pointer to the created node, or NULL on failure or if parent is NULL         
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
