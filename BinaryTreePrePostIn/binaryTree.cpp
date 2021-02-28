/**
 * @file binaryTree.cpp
 * @author Braiden Gole 
 * @brief This is where we will write our methods.
 * @version 0.1
 * @date 2021-02-28
 * @copyright Copyright (c) Braiden Gole 2021
 */
#include <iostream>
#include <stdio.h>

// Header file.
#include "binaryTree.h"

BinaryTree::BinaryTree()
{
    ;;
}
BinaryTree::~BinaryTree()
{
    ;;
}
LeafNode* BinaryTree::GrowNewLeaf(LeafNode* rootOfTree, char data)
{
    LeafNode* newLeaf = new LeafNode;

    if (newLeaf __EQ__ nullptr)
    {
        std::cerr << "Out of memory !";
        return nullptr;
    } 
    else
    {   
        // Write the data then end the node.
        newLeaf->symbol = data;
        newLeaf->left = NULL;
        newLeaf->right = NULL;
    }

    // Assign the root of the tree.
    if (rootOfTree __EQ__ NULL)
    {   
        return newLeaf;
    }
    else
    {   
        // Make sure to have at least one in the tree.
        do 
        {   
            rootOfTree = rootOfTree->left;
            if (rootOfTree __EQ__ NULL)
            {
                return newLeaf;
            }
            
            rootOfTree = rootOfTree->right;
            if (rootOfTree __EQ__ NULL)
            {
                return newLeaf;
            }
        } while (rootOfTree __NEQ__ NULL);
    }
    return ZERO;
}
void BinaryTree::InOrderTraversal(LeafNode* rootOfTree)
{   
    if (rootOfTree __NEQ__ NULL)
    {
        InOrderTraversal(rootOfTree->left);
        printf("%c ", rootOfTree->symbol);
        InOrderTraversal(rootOfTree->right);
    }
}
void BinaryTree::PreOrderTraversal(LeafNode* rootOfTree)
{
    if (rootOfTree __NEQ__ NULL)
    {   
        printf("%c ", rootOfTree->symbol);
        PreOrderTraversal(rootOfTree->left);
        PreOrderTraversal(rootOfTree->right);
    }
}
void BinaryTree::PostOrderTraversal(LeafNode* rootOfTree)
{
    if (rootOfTree __NEQ__ NULL)
    { 
        PostOrderTraversal(rootOfTree->left);
        PostOrderTraversal(rootOfTree->right);
        printf("%c ", rootOfTree->symbol);
    }
}
LeafNode* BinaryTree::BuildTree(BinaryTree* instance, LeafNode* rootOfTree)
{
    // Root.
    rootOfTree = instance->GrowNewLeaf(rootOfTree, 'A');

    rootOfTree->left = instance->GrowNewLeaf(rootOfTree, 'B');
    rootOfTree->left->left = instance->GrowNewLeaf(rootOfTree, 'C');
    rootOfTree->left->right = instance->GrowNewLeaf(rootOfTree, 'D');
    rootOfTree->left->left->left = instance->GrowNewLeaf(rootOfTree, 'E');

    rootOfTree->right = instance->GrowNewLeaf(rootOfTree, 'F');
    rootOfTree->right->right = instance->GrowNewLeaf(rootOfTree, 'G');
    rootOfTree->right->left = instance->GrowNewLeaf(rootOfTree, 'H');
    rootOfTree->right->right->right = instance->GrowNewLeaf(rootOfTree, 'I');
    return rootOfTree;
}