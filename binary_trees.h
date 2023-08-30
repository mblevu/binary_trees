#ifndef BINARY_TREES_H
#define BINARY_TREES_H


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;


/** -------------------
 * Function prototypes
 * --------------------
 */

/*create a binary tree node*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/*print binary tree*/
void binary_tree_print(const binary_tree_t *);
/*inserts a node as the left child of another node*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/*inserts a node as the right-child of another node*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* deletes an entire binary tree*/
void binary_tree_delete(binary_tree_t *tree);



#endif