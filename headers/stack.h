//
// Created by amith on 2/4/19.
//

#ifndef ALGORITHMS_STACK_H
#define ALGORITHMS_STACK_H

#include"generic.h"

class stack
{
private:
    int *_arr;
    int _tos;
    int capacity;
    int size;

public:
    stack(int size);
    void push(int x);
    void pop();
    int peak();
    bool isEmpty();
    int getSize();
    bool isFull();
    void dump();

};


#endif //ALGORITHMS_STACK_H
