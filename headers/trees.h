//
// Created by amith on 1/26/19.
//

#ifndef ALGORITHMS_TREES_H
#define ALGORITHMS_TREES_H

#include"generic.h"

typedef struct BST_NODE
{
    int data;
    struct BST_NODE *left;
    struct BST_NODE *right;
}TREENODE;


class BST
{
private:
    TREENODE* _root;
    int size;

    TREENODE* getNode(const int val);
    void insert(TREENODE*& _curr,const int val);
    void performInorder(TREENODE* root);
    int findHeight(TREENODE *root);


public:
    BST();
    void insert(const int val);
    void inorder();
    void levelOrder();
    int getSize();
    int findMin();
    int findMax();
    int getHeight();


};

#endif //ALGORITHMS_TREES_H
