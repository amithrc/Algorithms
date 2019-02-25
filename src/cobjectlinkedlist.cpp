//
// Created by amith on 2/24/19.
//

#include "../headers/cobjectlinkedlist.h"

NODE1* getNode(int val)
{
    NODE1* temp = (NODE1*) malloc(sizeof(NODE1));
    temp->x=val;
    temp->next = nullptr;
    return temp;
}

void displayList(LIST* l)
{
    NODE1* iter = l->_head;

    while(iter != nullptr)
    {
        cout << iter->x << "->";
        iter = iter->next;
    }

}

void insert(LIST* l,int val)
{
    NODE1* temp = l->allocateNode(val);
    if(l->_head == nullptr && l->_current == nullptr)
    {
        l->_head = l->_current = temp;
    }
    else
    {
        l->_current->next = temp;
        l->_current = temp;
    }
}

LIST* new_List()
{
    LIST* temp = (LIST*) malloc (sizeof(LIST));
    temp->_head = nullptr;
    temp->_current= nullptr;
    temp->insert = insert;
    temp->allocateNode = getNode;
    temp->display= displayList;
    return temp;
}

