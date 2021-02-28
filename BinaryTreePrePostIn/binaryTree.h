/**
 * @file binaryTree.h
 * @author Braiden Gole
 * @brief This file will hold the class representation of the binary
 *        tree algorithm which has methods to assist in
 *        the operations of the tree.
 * @version 0.1
 * @date 2021-02-28
 * @copyright Copyright (c) Braiden Gole 2021
 */
#ifndef _BINARYTREE
#define _BINARYTREE "binaryTree.h"

#define ERROR -1
#define ZERO 0

#define __EQ__ ==
#define __NEQ__ !=
#define __LSS__ <
#define __LRG__ >
#define __NOT__ !

struct LeafNode
{
    char symbol;
    LeafNode* left;
    LeafNode* right;
};

class BinaryTree 
{
    public:

        // Constructors.
        BinaryTree();

        // Desctructors.
        ~BinaryTree();

        // Methods.
        LeafNode* GrowNewLeaf(LeafNode* root, char symbol);

        // Traversal Methods.
        void InOrderTraversal(LeafNode* root);
        void PreOrderTraversal(LeafNode* rootOfTree);
        void PostOrderTraversal(LeafNode* rootOfTree);
        LeafNode* BuildTree(BinaryTree* root, LeafNode* rootOfTree);
};
#endif