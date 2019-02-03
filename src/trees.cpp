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

void BST::levelOrder() const
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

void BST::performInorder(TREENODE *root) const
{
    if(root==nullptr) return;
    performInorder(root->left);
    cout<< root->data <<endl;
    performInorder(root->right);
}

void BST::inorder() const
{
    performInorder(_root);
}

int BST::getSize()
{
    return size;
}

int BST::findMin()
{
    TREENODE* iter = _root;

    while(iter->left!=nullptr)
    {
        iter = iter->left;
    }
    return iter->data;
}

int BST::findMax()
{

    TREENODE* iter = _root;

    while(iter->right!=nullptr)
    {
        iter = iter->right;
    }
    return iter->data;
}


int BST::findHeight(TREENODE *root) const
{

    if(root== nullptr) return -1;

    int left=findHeight(root->left);
    int right=findHeight(root->right);
    return max(left,right)+1;

}
int BST::getHeight() const
{
    return findHeight(_root);
}