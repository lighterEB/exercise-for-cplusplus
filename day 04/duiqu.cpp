//
// Created by tosixJuly on 2021/1/2.
//
#include <iostream>
using namespace std;

// 在堆区开辟数据

int * func()
{
    int * p = new int(10);      // new要与delete配对使用
    return p;
}

void arry()
{
    int* array = new int[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = 100 + i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] <<endl;
    }
    delete[] array;
}

int main()
{
    int * p = func();
    cout << (int)*p << endl;
    cout << (int)*p << endl;
    cout << (int)*p << endl;
    cout << (int)*p << endl;
    cout << (int)*p << endl;
    delete p;
    arry();
}