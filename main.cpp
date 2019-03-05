#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"
#include "headers/array.h"
#include "headers/trees.h"
#include "headers/queue.h"
#include "crackingcodinginterview/headers/arrays.h"
#include "headers/search.h"
#include "headers/stack.h"
#include "headers/dynamicmemory.h"
#include "headers/cobjectoriented.h"
#include "headers/cobjectlinkedlist.h"
#include "headers/point.h"



using namespace std;
using namespace cci;



int main() {


 LinkedList l1;
 LinkedList l2;

    l1.insert(2);
    l1.insert(4);
    l1.insert(3);

    l2.insert(5);
    l2.insert(6);
    l2.insert(4);


    l1.dump();
    cout << "\n";
    l2.dump();
    cout << "\n";
    LinkedList* l3 = l1.addTwoList(l2);
    l3->dump();
    return 0;


}