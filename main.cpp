#include <iostream>
#include <assert.h>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"
#include "headers/array.h"
#include "headers/trees.h"
#include "headers/queue.h"

using namespace std;

int main() {



//    int A[]={60,20,40,50,10,10,9000,45,51,54,46};
//    int B[]={15,10,20,8,12,17,25};
//    BST b;
//    for(int a:B)
//    {
//        b.insert(a);
//    }
//    b.levelOrder();
//    //b.inorderDisplay();
//
//    cout << b.findMin() <<endl;
//    cout << b.findMax() << endl;
//    cout << "Height = "<< b.getHeight();

    Queue q(1000);

    assert(q.getsize()==0);

    for(int i=0;i<1000;i++)
    {
        q.insert(i*2+10);
    }
    q.dump(cout);

    assert(q.getsize()==1000);
    cout << "First item = " << q.get() << endl;
    assert(q.getsize()==999);

    cout << "Size now is = " << q.getsize() <<endl;
    cout << "Capacity now os = " << q.getcapacity() << endl;


    return 0;
}