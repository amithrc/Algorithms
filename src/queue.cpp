//
// Created by Amith-PC on 2/2/2019.
//

#include "../headers/queue.h"


Queue::Queue(int n)
{
    front = rear = -1;
    _arr = new int[n]();
    size=0;
    capacity =n;
}

void Queue::insert(const int val)
{
    if(size == capacity)
    {
        cout << "Queue is Full" <<endl;
        exit(-1);
    }else
    {
        rear=rear +1;
        *(_arr+rear)=val;
        size++;
    }

}
int Queue::get() {
    if (size==0) {
        cout << " Nothing in queue" << endl;
        exit(-1);
    } else {
        front++;
        size--;
        return _arr[front];
    }
}
void Queue::dump(ostream& os)
{
    for(int i=0;i< size;i++)
    {
        os << *(_arr+i) << endl;
    }
}
int Queue::getsize()
{
        return size;
}
int Queue::getcapacity()
{
    return capacity;
}


