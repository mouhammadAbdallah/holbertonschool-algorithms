#include "nary_trees.h"

/**
 * nary_tree_insert - insert node
 * @parent: pointer to parent
 * @str: string to store in inserted node
 *
 * Return: pointer to node
 */
nary_tree_t *nary_tree_insert(nary_tree_t *parent, char const *str)
{
	nary_tree_t *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = strdup(str);
	if (!new->content)
		return (NULL);

	new->parent = parent;
	new->nb_children = 0;
	new->children = NULL;
	if (parent)
	{
		++parent->nb_children;
		new->next = parent->children;
		parent->children = new;
	}
	else
	{
		new->next = NULL;
	}
	return (new);
}
