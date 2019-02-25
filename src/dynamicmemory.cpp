//
// Created by amith on 2/23/19.
//

#include "../headers/dynamicmemory.h"

MAT* allocate2d(int row, int column)
{

    MAT *mat = new MAT;
    int **mat1 = new int*[row];
    for( int i=0;i< row ;i++)
    {
        mat1[i] = new int[column];
    }
    mat->mat =mat1;
    mat-> row=row;
    mat->col=column;
    return mat;

}


void fill2d(MAT* mat)
{
    int **matele = mat->mat;

    for( int i =0;i < mat->row;i++)
    {
        for( int j=0; j < mat->col;j++)
        {
            *(*(matele+i) +j) = 0;
        }
    }

}


void display2d(MAT* mat)
{
    int **matele = mat->mat;

    for( int i =0;i < mat->row;i++)
    {
        for( int j=0; j < mat->col;j++)
        {
            cout << *(*(matele+i) +j)  << " ";
        }
        cout << endl;
    }

}

MATD* create2d(int row, int column)
{

    MATD* temp = new MATD;

    temp->mat = new int[row*column];
    temp->row = row;
    temp->col =column;
    return temp;
}

void fill2d_1(MATD* mat)
{
    for(int i=0;i< mat->row;i++)
    {
        for(int j=0;j< mat->col; j++)
        {
            *(mat->mat+i*mat->col+j)=0;
        }
    }

}

void display2d_1(MATD* mat)
{
    for(int i=0;i< mat->row;i++)
    {
        for(int j=0;j< mat->col; j++)
        {
            cout << *(mat->mat+i*mat->col+j) << " ";
        }
        cout << endl;
    }

}