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

/*
 * Find missing number in sequency o(log n)
 */

int search(int ar[], int size)
{
    int a = 0, b = size - 1;
    int mid;
    while ((b - a) > 1) {
        mid = (a + b) / 2;
        if ((ar[a] - a) != (ar[mid] - mid))
            b = mid;
        else
            a=mid;
    }
    return (ar[mid] + 1);
}

void printPairSumsUpToK(int *arr,int n,int k)
{
    set<int> s;
    set<int>::iterator iter;

    for(int i=0;i< n;i++)
    {
        //if(s.find(arr[i]) == s.end())
            s.insert(arr[i]);
    }

    for(int i=0;i< n;i++)
    {
        int val1 = arr[i]+k;
        int val2 = arr[i]-k;

        if(s.find(val1)!= s.end())
        {
            iter = s.find(val1);
            cout << arr[i] << "," << *iter <<endl;
            s.erase(arr[i]);
        }
        if(s.find(val2)!= s.end())
        {
            iter = s.find(val2);
            cout <<*iter <<","<< arr[i] <<endl;
            s.erase(arr[i]);
        }
    }

}