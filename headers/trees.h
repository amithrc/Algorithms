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
    void performInorder(TREENODE* root) const;
    int findHeight(TREENODE *root) const;


public:
    BST();
    void insert(const int val);
    void inorder() const;
    void levelOrder() const;
    int getSize();
    int findMin();
    int findMax();
    int getHeight() const;


};

#endif //ALGORITHMS_TREES_H
