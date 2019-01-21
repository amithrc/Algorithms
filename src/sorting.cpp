//
// Created by amith on 1/17/19.
//
#include "../headers/generic.h"
#include "../headers/sorting.h"

/****************************************************************************/
//In-place selection sort, no extra memory
//When funtion returns, the same unsorted pointer will be pointing to
// the sorted items
/****************************************************************************/
void selection_sort_2(int *unsorted,int n)
{
    for(int i=0;i<n;i++)
    {
        int iMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(unsorted[j] < unsorted[iMin])
            {
                iMin=j;
            }
        }
        swap(&unsorted[i],&unsorted[iMin]);
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
// using extra memory, caller responsibility to free the memory
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
/****************************************************************************/
// Bubble sort , not efficient.
/****************************************************************************/
void bubble_sort_1(int *unsorted,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(unsorted[j] > unsorted[j+1])
            {
                swap((unsorted+j),(unsorted+j+1));
            }
        }
    }
}

/****************************************************************************/
// Bubble sort , efficient.
/****************************************************************************/
void bubble_sort_2(int *unsorted,int n)
{
    bool swapped;
    for(int i=0;i<n-1;i++)
    {
        swapped=false;
        for(int j=0;j < n-1-i;j++)
        {
            if(unsorted[j] > unsorted[j+1])
            {
                swap((unsorted+j),(unsorted+j+1));
                swapped=true;
            }
        }
        if(!swapped) break;
    }
}

//   int A[]={60,20,40,50,10,10,9000,45,51,54,46};

/****************************************************************************/
// Insertion sort, efficient.
/****************************************************************************/
void insertion_sort_1(int *unsorted,int n)
{
    for(int i=1;i<n;i++)
    {
        int val=unsorted[i];
        int hole=i;

      while(hole>0 && unsorted[hole-1]>val)
      {
          unsorted[hole]=unsorted[hole-1];
          hole--;
      }

      unsorted[hole]=val;
    }
}
/****************************************************************************/
// My implementation
/****************************************************************************/
void insertion_sort_2(int *unsorted,int n)
{

    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(unsorted[j] < unsorted[j-1])
            {
                swap(&unsorted[j],&unsorted[j-1]);
            }
        }

    }

}
