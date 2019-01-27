//
// Created by amith on 1/26/19.
//

#include "../headers/trees.h"
#include"../headers/generic.h"
#include <queue>

BST::BST() {
    this->_root= nullptr;
    this->size=0;
}

TREENODE* BST::getNode(const int val)
{
    TREENODE* temp=new TREENODE;

    if(!temp)
    {
        cerr << "Error allocating memory" <<endl;
        exit(-1);
    }

    temp->data=val;
    temp->left= nullptr;
    temp->right=nullptr;

    return temp;
}

void BST::insert(TREENODE *& _curr,const int val)
{
    if(_curr == nullptr)
    {
        _curr=getNode(val);
        size++;
    }else if(val <= _curr->data)
    {
        insert(_curr->left,val);
    }else
    {
        insert(_curr->right,val);
    }
}

void BST::insert(const int val)
{
    insert(_root,val);
}

void BST::LevelOrder()
{

    if(_root == nullptr) return;

    queue<TREENODE*> q;

    q.push(_root);

    while(!q.empty())
    {
        TREENODE* curr=q.front();
        cout<< curr->data << endl;
        if(curr->left!= nullptr) q.push(curr->left);
        if(curr->right!= nullptr) q.push(curr->right);
        q.pop();
    }
}
