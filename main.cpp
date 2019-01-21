#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"


using namespace std;

int main() {



    int A[]={60,20,40,50,10,10,9000,45};

    selection_sort_2(A,8);
    displaySorted(A,8);

    return 0;
}