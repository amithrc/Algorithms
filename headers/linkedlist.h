//
// Created by Amith-PC on 1/17/2019.
//

#ifndef ALGORITHMS_LINKEDLIST_H
#define ALGORITHMS_LINKEDLIST_H

#include "generic.h"

typedef struct Node
{
    int x;
    struct Node *next;
}NODE;


NODE* getNode(int x);
NODE* createReverseList(int val,int disp);
NODE* createForwardList(int val,int disp);
void DisplayNode(NODE* head);
int SearchList(NODE* head, int val);
vector<int> FillVector();
void DisplayVector(vector<int>& h);


#endif //ALGORITHMS_LINKEDLIST_H
