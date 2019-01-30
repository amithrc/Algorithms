#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"
#include "headers/sorting.h"
#include "headers/array.h"
#include "headers/trees.h"

using namespace std;

int main() {



    int A[]={60,20,40,50,10,10,9000,45,51,54,46};
    int B[]={15,10,20,8,12,17,25};
    BST b;
    for(int a:B)
    {
        b.insert(a);
    }
    b.levelOrder();
    //b.inorderDisplay();

    cout << b.findMin() <<endl;
    cout << b.findMax() << endl;
    cout << "Height = "<< b.getHeight();
    return 0;
}