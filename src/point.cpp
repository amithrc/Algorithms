//
// Created by amith on 2/24/19.
//

#include "../headers/point.h"
struct point
{
    int x;
    int y;
};

typedef point Point;

void init(Point* p,int x,int y)
{
    p->x= x;
    p->y=y;
}

point* new_point(int x,int y)
{
    Point* obj = (Point*) malloc(sizeof(Point));
    init(obj,x,y);
    return obj;
}

int getX(point* p)
{
    return p->x;
}

int getY(point* p)
{
    return p->y;
}



