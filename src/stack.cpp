//
// Created by amith on 2/4/19.
//

#include"../headers/stack.h"



stack::stack(int cap) {
    _arr= new int[cap];
    capacity=cap;
    size=0;
    _tos=-1;
}

bool stack::isFull() {
    if(_tos==capacity-1)
    {
        return true;
    }

    return false;
}

bool stack::isEmpty() {
    if(_tos==-1)
    {
        return true;
    }
    return false;
}

void stack::push(int x) {
    if(isFull())
    {
        cout << " Stack is full"<<endl;
    }
    else
    {
        _tos++;
        _arr[_tos]=x;
        size++;
    }
}

void stack::pop()
{

    if(isEmpty())
    {
        cout << "No element to pop" <<endl;
    }
    _tos--;
    size--;
}

int stack::peak() {
    if(isEmpty())
    {
        cout << "NO element ins stack to peak"<<endl;
    }
    return _arr[_tos];
}


int stack::getSize() {
    return size;
}

void stack::dump() {
    for(int i=_tos;i >0;i--)
    {
        cout << _tos+1 << ":"<<_arr[i] <<endl;
    }
}