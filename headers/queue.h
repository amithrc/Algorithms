//
// Created by Amith-PC on 2/2/2019.
//

#ifndef ALGORITHMS_QUEUE_H
#define ALGORITHMS_QUEUE_H

#include "../headers/generic.h"

class Queue
{
private:
    int *_arr;
    int front, rear;
    int size;
    int capacity;
public:
    Queue(int size);
    void insert(const int val);
    int get();
    void dump(ostream&);
    int getsize();
    int getcapacity();

};
#endif //ALGORITHMS_QUEUE_H
