#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (!first || !second)
        return (NULL);

    if (first == second)
        return (binary_tree_t *)first;

    binary_tree_t *ancestor = (binary_tree_t *)first;

    while (ancestor)
    {
        binary_tree_t *temp = (binary_tree_t *)second;
        while (temp)
        {
            if (ancestor == temp)
                return (ancestor);
            temp = temp->parent;
        }
        ancestor = ancestor->parent;
    }

    return (NULL);
}
