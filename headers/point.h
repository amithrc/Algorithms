//
// Created by amith on 2/24/19.
//

#ifndef ALGORITHMS_POINT_H
#define ALGORITHMS_POINT_H

#include "generic.h"

struct point;

point* new_point(int x,int y);
void destruct(point* self);
int getX(point*);
int getY(point*);

#endif //ALGORITHMS_POINT_H
