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

void LinkedList::DisplayNode(NODE *head)
{
    NODE* iter=head;
    while(iter)
    {
        cout << iter->x << "-->";
        iter=iter->next;
    }
    cout<<endl;
}

NODE* LinkedList::getNode(int val)
{
    NODE* t = new NODE;
    t->x=val;
    t->next= nullptr;
}

void LinkedList::createForwardList()
{

    for(int i=0;i< size;i++)
    {
        NODE* temp = getNode(i);

        if(head== nullptr && current== nullptr)
        {
            head=current=temp;
        }
        else
        {
            current->next=temp;
            current=temp;
        }
    }
}

void LinkedList::dump() {
    DisplayNode(head);
}

void LinkedList::remove(const int val)
{

    NODE* iter = head;

    if(iter->x == val)
    {
        head=iter->next;
        delete iter;
    }else
    {
        NODE* prev = iter;
        iter = iter->next;
        while(iter != nullptr)
        {
            if(iter->x == val)
            {
                prev->next=iter->next;
                delete iter;
                return;
            }
            iter=iter->next;
            prev=prev->next;
        }

    }
    cout << "Item is not in the list" <<endl;

}