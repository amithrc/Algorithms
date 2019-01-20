//
// Created by amith on 1/17/19.
//
#include "../headers/generic.h"
#include "../headers/sorting.h"

void selectionSort(const int *unsorted,int size)
{
    for(int i=0;i<size;i++)
    {
        cout << *(unsorted+i) << endl;
    }
}

/****************************************************************************/
//Display an array given a pointer to base adress and size of the array
/****************************************************************************/

void displaySorted(int *disp, int size)
{
    for(int i=0;i< size;i++ )
    {
        cout << *(disp+i) << " ";
    }
    cout << endl;
}

/****************************************************************************/
// Below method performs selection sort
// using extra memory, called responsibility to free the memory
/****************************************************************************/
int* selection_sort_1(int *unsorted,int n)
{
    int *sorted = new int[n];

    if(!sorted)
    {
        cerr << "Error in allocating memory";
        exit(-1);
    }

    for(int i=0;i< n ;i++)
    {
        int iMin=i;

        for(int j=0;j<n;j++)
        {
            if(unsorted[j] < unsorted[iMin])
            {
                iMin=j;
            }
        }
        *(sorted+i)=*(unsorted+iMin);
        *(unsorted+iMin)=INFINITE;
    }
    return sorted;
}