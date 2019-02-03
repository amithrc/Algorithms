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


int BST::has(TREENODE *root,const int val) const
{
    if(root==nullptr) return -1;
    if(root->data == val ) return root->data;
    else if(val < root->data)
        has(root->left,val);
    else
        has(root->right,val);
}
int BST::contains(const int val) const
{
    return has(_root,val);
}


TREENODE* BST::findCurrent(TREENODE *root,int data)
{
    if(root == nullptr) return nullptr;
    if(root->data == data) return root;
    else if(data < root->data)
    {
        return findCurrent(root->left,data);
    }
    else
    {
        return findCurrent(root->right,data);
    }
}

TREENODE* BST::getMin(TREENODE *root) {

    if(root == nullptr) return nullptr;
    while(root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

TREENODE* BST::inorderSuccessor(TREENODE *root, const int val) {

    TREENODE* current= findCurrent(_root,val);
    if(current == nullptr) return nullptr;

    if(current->right != nullptr)
    {
        return getMin(current->right);
    }
    else
    {
        TREENODE* successor= nullptr;
        TREENODE* ancestor= root;

        while(ancestor != current)
        {
            if(current->data < ancestor->data)
            {
                successor = ancestor;
                ancestor=ancestor->left;
            }else
            {
                ancestor=ancestor->right;
            }
        }
        return successor;
    }
}
int BST::getSuccessor(const int val)
{
    TREENODE* temp = inorderSuccessor(_root,val);

    if(temp!=nullptr)
    {
        return temp->data;
    }
    return -1;
}


void BST::printSuccessor(const int val)
{
    TREENODE* temp = inorderSuccessor(_root,val);

    if(temp!=nullptr)
    {
        performInorder(temp);
    }
    cout << "Item not found" <<endl;
}