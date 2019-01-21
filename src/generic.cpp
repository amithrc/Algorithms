//
// Created by amith on 1/20/19.
//

void call_free(int* ptr)
{
    if(ptr!= nullptr)
    {
        delete[] ptr;
    }
}

void swap(int *a,int *b)
{
    int temp= *a;
    *a =*b;
    *b=temp;

}