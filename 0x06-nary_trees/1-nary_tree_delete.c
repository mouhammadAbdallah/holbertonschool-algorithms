#include "nary_trees.h"

/**
 * nary_tree_delete - free entire tree
 * @tree: root node
 */
void nary_tree_delete(nary_tree_t *tree)
{
	nary_tree_t *tmp;

	while (tree)
	{
		tmp = tree;
		tree = tree->next;
		nary_tree_delete(tmp->children);
		free(tmp->content);
		free(tmp);
	}
}
