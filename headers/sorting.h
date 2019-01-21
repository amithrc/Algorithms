//
// Created by amith on 1/17/19.
//

#ifndef ALGORITHMS_SORTING_H
#define ALGORITHMS_SORTING_H

#include "generic.h"
#define INFINITE 999999

//Selection sort
void selection_sort_2(int *unsorted,int size);
int* selection_sort_1(int *unsorted,int size);


//Bubble sort

void bubble_sort_1(int *unsorted,int size);
void bubble_sort_2(int *unsorted,int size);




void displaySorted(int *disp, int size);
#endif //ALGORITHMS_SORTING_H
