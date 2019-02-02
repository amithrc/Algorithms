//
// Created by Amith-PC on 2/2/2019.
//

#include"../headers/arrays.h"

ArrayMethods::ArrayMethods(int cap)
{
    this->_arr = new int[cap]();
    this->cap=cap;
}

void ArrayMethods::display()
{
    for(int i=0;i< cap;i++)
    {
        cout << _arr[i] <<endl;
    }

}
