//
// Created by amith on 2/24/19.
//

#include "../headers/cobjectoriented.h"



int calculate_salary(int exp)
{
    if(exp > 5)
    {
        return 20000;
    }else if(exp > 10)
    {
        return 30000;
    }else if(exp > 15)
    {
        return 40000;
    }
    return -1;
}

EMPPTR  new_employee(int experience)
{
    EMPPTR obj = (EMPPTR) malloc(sizeof(EMP));
    obj->experience = experience;
    obj->getSalary = calculate_salary;
    return obj;

}

