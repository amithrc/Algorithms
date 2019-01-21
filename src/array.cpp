//
// Created by amith on 1/21/19.
//

#include "../headers/array.h"


// int A[]={60,20,40,50,10,10,9000,45};
void reverseArray(int *_arr,int n)
{

    for(int i=0;i<n/2;i++)
    {
        int last=n-i-1;
        swap(&_arr[i],&_arr[last]);
    }
}