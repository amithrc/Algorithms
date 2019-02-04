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


class LinkedList
{
private:
     NODE* head, *current;
    void DisplayNode(NODE* head);
    NODE* getNode(int val);
    int size;

    public:
    LinkedList(int val);
    void createForwardList();
    void dump();
    void remove(const int val);


};



#endif //ALGORITHMS_LINKEDLIST_H
