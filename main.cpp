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
using namespace cci;
int main() {


//
//    /// int A[]={60,20,40,50,10,10,9000,45,51,54,46};
//       int B[]={15,10,16,20,8,12,17,25,11};
//
//        BST bs;
//        for(auto AA:B)
//        {
//            bs.insert(AA);
//        }
//
//
//        cout << "Get successor = " << bs.getSuccessor(11);



        LinkedList l(100);
        l.createForwardList();
        l.dump();
        l.remove(99);
        l.dump();



    return 0;
}