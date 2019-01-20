#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"


using namespace std;

int main() {



    int A[]={60,20,40,50,10,9000,45};

    int* res = selection_sort_1(A,7);
    displaySorted(res,7);
    call_free(res);
    return 0;
}