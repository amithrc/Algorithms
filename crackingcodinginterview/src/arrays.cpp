//
// Created by Amith-PC on 2/2/2019.
//

#include"../headers/arrays.h"

using namespace cci;

cci::ArrayMethods::ArrayMethods(int cap)
{
    this->_arr = new int[cap]();
    this->cap=cap;
}

ArrayMethods::ArrayMethods(int *arr,int capacity)
{
    this->_arr = arr;
    this->cap =capacity;
}

void ArrayMethods::display()
{
    for(int i=0;i< cap;i++)
    {
        cout << _arr[i] <<endl;
    }

}
