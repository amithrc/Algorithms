//
// Created by amith on 2/24/19.
//

#ifndef ALGORITHMS_COBJECTORIENTED_H
#define ALGORITHMS_COBJECTORIENTED_H

#include "generic.h"

typedef struct Employee
{
    int salary;
    int experience;
    int (*getSalary)(int) = nullptr;

}EMP;

typedef EMP* EMPPTR;

EMPPTR  new_employee(int experience);

#endif //ALGORITHMS_COBJECTORIENTED_H
