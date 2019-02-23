//
// Created by Amith-PC on 1/17/2019.
//

#include "../headers/generic.h"

#include"../headers/linkedlist.h"


LinkedList::LinkedList(int val) {
    size=val;
    head= nullptr;
    current= nullptr;
}


NODE* LinkedList::getNode(int val)
{
    NODE* t = new NODE;
    t->x=val;
    t->next= nullptr;
}


void LinkedList::dump() {
    //DisplayNode(head);
}



/*
 * Insert at the end of the list
 */
void LinkedList::insert(const int val) {

    Node* temp = getNode(val);

    if( head == nullptr && current == nullptr)
    {
        head =current = temp ;
    }else
    {
        current->next =temp;
        current = temp;
    }
}

