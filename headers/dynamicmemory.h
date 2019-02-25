//
// Created by amith on 2/23/19.
//

#ifndef ALGORITHMS_DYNAMICMEMORY_H
#define ALGORITHMS_DYNAMICMEMORY_H

#include"generic.h"


typedef struct Matrix
{
    int **mat;
    int row;
    int col;
}MAT;

typedef struct Matrix1
{
    int *mat;
    int row;
    int col;
}MATD;



MAT* allocate2d(int row, int column);
void fill2d(MAT* mat);

void display2d(MAT* mat);
MATD* create2d(int row, int column);
void fill2d_1(MATD* mat);
void display2d_1(MATD* mat);

#endif //ALGORITHMS_DYNAMICMEMORY_H
