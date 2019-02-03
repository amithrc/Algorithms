//
// Created by Amith-PC on 2/2/2019.
//

#ifndef ALGORITHMS_ARRAYS_H
#define ALGORITHMS_ARRAYS_H

#include "../../headers/generic.h"

namespace cci
{
    class ArrayMethods
    {
        int* _arr;
        int cap;

    public:

        ArrayMethods(int cap);
        ArrayMethods(int *arr,int capacity);
        void display();

    };

}


#endif //ALGORITHMS_ARRAYS_H
