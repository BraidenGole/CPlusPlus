/**
 * @file binary.cpp
 * @author Braiden Gole
 * @brief This is the implementation of a binary tree but this one will
 *        include more than my (C) binary tree.
 * 
 *        The implementation will have inorder, preorder, postorder
 *        traversals in order to print the tree.
 * 
 *        This implementation will include some much needed recursion !
 * @version 0.1
 * @date 2021-02-28
 * @copyright Copyright (c) Braiden Gole 2021
 */
#include <iostream>

// Header file.
#include "binaryTree.h"

int main(void)
{
    BinaryTree* binTree = new BinaryTree();
    LeafNode* treeRoot = new LeafNode();

    if (binTree __EQ__ nullptr)
    {
        std::cerr << "Out of memory !";
        return ERROR;
    }
    else
    {   
        treeRoot = binTree->BuildTree(binTree, treeRoot);
    }

    printf("\nPre Order Traversal\n");
    binTree->PreOrderTraversal(treeRoot);
    printf("\nIn Order Traversal\n");
    binTree->InOrderTraversal(treeRoot);
    printf("\nPost Order Traversal\n");
    binTree->PostOrderTraversal(treeRoot);

    delete binTree;
    delete treeRoot;
    return 0;
}