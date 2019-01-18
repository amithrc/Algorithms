#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"


using namespace std;

int main() {

    createForwardList(100,TRUE);

    int A[]={10,20,40,50,60};

    selectionSort(A,5);
    return 0;
}