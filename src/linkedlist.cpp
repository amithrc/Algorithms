//
// Created by Amith-PC on 1/17/2019.
//

#include "../headers/generic.h"
#include"../headers/linkedlist.h"


void DisplayNode(NODE* head)
{
    NODE* iter=head;
    while(iter)
    {
        cout << iter->x << "-->";
        iter=iter->next;
    }
    cout<<endl;
}

NODE* getNode(int val)
{
    NODE* t = new NODE;
    t->x=val;
    t->next=NULL;
}

NODE* createForwardList(int val,int callDisp)
{
    NODE* head, *current;
    head=current=NULL;

    for(int i=0;i< val;i++)
    {
        NODE* temp = getNode(i);

        if(head==NULL && current==NULL)
        {
            head=current=temp;
        }
        else
        {
            current->next=temp;
            current=temp;
        }
    }
    if(callDisp)
    {
        DisplayNode(head);
        return NULL;
    }
    return head;

}