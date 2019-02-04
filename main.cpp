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


using namespace std;
using namespace cci;
int main() {



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
//      bs.levelOrder();
//
//        cout << "Removing "<<endl;
//
//        bs.remove(17);
//    bs.levelOrder();
//


stack s(100);


for(int i=0;i<100;i++)
{
    s.push(i*2+2);
}

s.dump();

    for(int i=0;i<20;i++)
    {
        s.pop();
    }

    s.dump();
    return 0;
}