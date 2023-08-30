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
/*checks if a node is a leaf*/
int binary_tree_is_leaf(const binary_tree_t *node);
/*checks if a given node is a root*/
int binary_tree_is_root(const binary_tree_t *node);
/*goes through a binary tree using pre-order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/*goes through a binary tree using in-order traversal*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/*goes through a binary tree using post-order traversal*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/*measures the height of a binary tree*/
size_t binary_tree_height(const binary_tree_t *tree);
/*measures the depth of a node in a binary tree*/
size_t binary_tree_depth(const binary_tree_t *tree);
/*measures the size of a binary tree*/
size_t binary_tree_size(const binary_tree_t *tree);



#endif