//
// Created by tosixJuly on 2021/1/4.
//
#include <iostream>
using namespace std;

int main()
{
    // 引用基本语法
    // 数据类型 &别名 = 原名

    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 200;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
