//
// Created by tosixJuly on 2021/1/2.
//
#include <iostream>
using namespace std;

// 在堆区开辟数据

int * func()
{
    int * p = new int(10);
    return p;
}

int main()
{
    int * p = func();
    cout << (int)*p << endl;
    cout << (int)*p << endl;
    cout << (int)*p << endl;
    cout << (int)*p << endl;
    cout << (int)*p << endl;
}