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


//
//     point *obj = new_point(10,20);
//
//     cout << getX(obj) << endl;
//     cout << getY(obj) << endl;




//     EMPPTR emp = new_employee(10);
//
//     cout << emp->getSalary(emp->experience);



    // LIST* ls = new_List();
//    int B[]={15,10,16,20,8,12,17,25,11};

//    for(auto AA:B)
//    {
//        ls->insert(ls,AA);
//    }
//
//    ls->display(ls);



    int ar[] = { 1, 3, 4, 5, 6,7, 8 };
    int size = sizeof(ar) / sizeof(ar[0]);
    cout << "Missing number:" << search(ar, size);

    cout << endl;





    /// int A[]={60,20,40,50,10,10,9000,45,51,54,46};
    int B[]={15,10,16,20,8,12,17,25,11};

    BST bs;
    LinkedList ls;
    for(auto AA:B)
    {
        bs.insert(AA);
    }

        //bs.levelOrder();
   // cout << bs.getSuccessor(10) << endl;

   bs.remove(20);
    bs.levelOrder();
//    cout <<endl;
//    cout << ls.getSize() <<endl;
//
//    cout << ls.has(100) <<endl;
//
//
//    bs.levelOrder();
//
//    cout << "Removing "<<endl;
//
//    bs.remove(17);
//    bs.levelOrder();
//
//
//    MAT* temp = allocate2d(10,10);
//    fill2d(temp);
//
//    display2d(temp);
//    MATD* temp1 =create2d(10,10);
//    fill2d_1(temp1);
//    display2d_1(temp1);

    return 0;


}