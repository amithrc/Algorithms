//
// Created by Amith-PC on 1/17/2019.
//

#include "../headers/generic.h"

#include"../headers/linkedlist.h"


LinkedList::LinkedList() {
    size=0;
    head= nullptr;
    current= nullptr;
}


NODE* LinkedList::getNode(int val)
{
    NODE* t = new NODE;
    t->x=val;
    t->next= nullptr;
}

void LinkedList::DisplayNode(NODE *head) {

    NODE* iter = head;
    while( iter != nullptr)
    {
        cout << iter->x << " ->";
        iter = iter->next;
    }

}


void LinkedList::dump() {
    DisplayNode(head);
}



/*
 * Insert at the end of the list
 */
void LinkedList::insert(const int val) {
    size++;
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

void LinkedList::insertAtfront(const int val) {
    size++;
    Node* temp =getNode(val);

    if(head != nullptr)
    {
        temp->next =head;
        head = temp;
    }else
    {
        head = current = temp;
    }
}


int LinkedList::getSize() {
    return size;
}


int LinkedList::check(NODE *root, const int val) {
    NODE* iter = head;
    while( iter != nullptr)
    {
        if(iter->x == val ) return iter->x;
        iter = iter->next;
    }
    return -1;
}

int LinkedList::has(const int val) {
    return check(head, val);
}

/*
 * Add numbers and carry over, a single digit
 */
LinkedList* LinkedList::addTwoList(LinkedList &l2) {

    NODE* l1h = this->head;
    NODE* l2h =l2.head;

    int carry=0;

    auto newhead = new LinkedList();

    while(l1h != nullptr && l2h != nullptr)
    {

        int sum = l1h->x + l2h->x+ carry;
        int m = sum%10;
        newhead->insert(m);

        carry = sum/10;
        l1h= l1h->next;
        l2h= l2h->next;

    }
    return newhead;
}
