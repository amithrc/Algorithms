//
// Created by amith on 1/31/19.
//

#include "../headers/generic.h"
#include "../headers/search.h"


BinarySearch::BinarySearch(int *arr, int size)
{
    _arr=arr;
    this->size=size;

}
int BinarySearch::searchIteratively(const int val) const
{
        int start, end;
        start=0;
        end=size-1;

        while(start <= end)
        {

            int mid= (start+end)/2;
            if(_arr[mid] == val) return mid+1;
            else if(val < _arr[mid])
            {
                end= mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return -1;
}

int BinarySearch::performRecursive(const int val,int start=0,int end=0) const
{
    if(start > end ) return -1;

    int mid=(start+end)/2;

    if(_arr[mid]== val) return mid;
    else if (val <_arr[mid] ) return performRecursive(val,start,mid-1);
    else return performRecursive(val,(mid+1),end);

}
int BinarySearch::searchRecursively(const int val) {

    return performRecursive(val,0,size-1);
}

int BinarySearch::findFirstOccurence(const int val)
{

    int start=0;
    int end=size-1;
    int result=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(val==_arr[mid])
        {
            result=mid; end=mid-1;
        }
        else if(val < _arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

    }
    return result;
}


int BinarySearch::findLastOccurence(const int val)
{

    int start=0;
    int end=size-1;
    int result=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(val==_arr[mid])
        {
            result=mid; start=mid+1;
        }
        else if(val < _arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

    }
    return result;
}


