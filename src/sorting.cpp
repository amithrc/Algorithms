//
// Created by amith on 1/17/19.
//

#include "../headers/sorting.h"

void selectionSort(const int *unsorted,int size)
{
    for(int i=0;i<size;i++)
    {
        cout << *(unsorted+i) << endl;
    }
}


int* SelectionSortSpace(int *unsorted,int n)
{
    int *temp = new int[n];

    int min=0;
    for(int i=0;i< n-1;i++)
    {
        min = i;
        for(int j=i+1;j< n-1;j++)
        {

        }
    }

}