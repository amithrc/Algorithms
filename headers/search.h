//
// Created by amith on 1/31/19.
//

#ifndef ALGORITHMS_SEARCH_H
#define ALGORITHMS_SEARCH_H


class BinarySearch
{
private:
        int *_arr;
        int size;
        int performRecursive(const int val,int start, int end) const;

public:
    BinarySearch(int *arr, int size);
    int searchIteratively(const int val) const;

    int searchRecursively(const int val);

    int findFirstOccurence(const int val);
    int findLastOccurence(const int val);

};
#endif //ALGORITHMS_SEARCH_H
