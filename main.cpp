#include <iostream>
#include "headers/linkedlist.h"
#include "headers/generic.h"

using namespace std;

int main() {

    createForwardList(100,1);
    vector<int> val= FillVector();
    DisplayVector(val);
    return 0;
}