#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"
#include "headers/array.h"

using namespace std;

int main() {



    int A[]={60,20,40,50,10,10,9000,45};

//    bubble_sort_1(A,8);
//    displaySorted(A,8);

    reverseArray(A,8);
    displaySorted(A,8);
    return 0;
}