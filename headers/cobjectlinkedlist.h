//
// Created by amith on 2/24/19.
//

#ifndef ALGORITHMS_COBJECTLINKEDLIST_H
#define ALGORITHMS_COBJECTLINKEDLIST_H

#include "generic.h"
#include "stdio.h"
#include "stdlib.h"

typedef  struct Node1
{
    int x;
    struct Node1* next;
}NODE1;


typedef struct List
{
    int size;
    NODE1* _head;
    NODE1* _current;

    void (*insert)(struct List*,int);
    NODE1* (*allocateNode)(int);
    void (*display)(struct List*);
} LIST;

LIST* new_List();

#endif //ALGORITHMS_COBJECTLINKEDLIST_H
