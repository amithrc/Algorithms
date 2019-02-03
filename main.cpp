#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"
#include "headers/array.h"
#include "headers/trees.h"
#include "headers/queue.h"
#include "crackingcodinginterview/headers/arrays.h"
#include "headers/search.h"

using namespace std;

int main() {



   int A[]={60,20,40,50,10,10,9000,45,51,54,46};
   int B[]={15,10,10,20,8,12,17,25};


    merge_sort_1(B,7);
    displaySorted(B,7);
    BinarySearch bs(B,7);



    return 0;
}