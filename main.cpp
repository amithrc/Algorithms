#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"
#include "headers/array.h"

using namespace std;

int main() {



    int A[]={60,20,40,50,10,10,9000,45,51,54,46};
    insertion_sort_1(A,11);
    displaySorted(A,11);

    insertion_sort_2(A,11);
    displaySorted(A,11);




    merge_sort_1(A,11);
    displaySorted(A,11);
    return 0;
}