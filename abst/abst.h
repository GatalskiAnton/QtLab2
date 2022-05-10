#pragma once
#include <iostream>

class ABST
{
public:
    ABST()
    {
        arr = new int[capacity];
        for (int i = 0; i < capacity; ++i) arr[i] = -1;
    }

    ~ABST()
    {
        for (int i = 0; i < 20; ++i) std::cout << arr[i] << "   ";
        std::cout << '\n';
        delete[] arr;
    }

    void insert(int x)
    {
        doInsert(0, x);
    }
    void traverse()
    {
        traverse(0);
    }

private:
    void doInsert(int index, int x)
    {
        if (arr[index] == -1) 
        {
            arr[index] = x;
            return;
        }
        if (x < arr[index])
        {
            doInsert(2 * index + 1, x);
        }
        else 
        {
            doInsert(2 * index + 2, x);
        }
    }

    void traverse(int index) 
    {
        if (arr[2 * index + 1] != -1) 
        {
            traverse(2 * index + 1);
        }
        //do something with node
        std::cout << arr[index] << "   ";
        if (arr[2 * index + 2] != -1) 
        {
            traverse(2 * index + 2);
        }
    }
    //private:
public:
    int* arr;
    int capacity = 100;
};

