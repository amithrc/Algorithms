#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"
#include "headers/array.h"
#include "headers/trees.h"

using namespace std;

int main() {



    int A[]={60,20,40,50,10,10,9000,45,51,54,46};

    BST b;
    for(int a:A)
    {
        b.insert(a);
    }
    b.LevelOrder();

    return 0;
}