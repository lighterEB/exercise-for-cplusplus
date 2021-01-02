//
// Created by tosixJuly on 2021/1/2.
//

#include <iostream>
using namespace std;

int * func(int b)       // 栈区存放局部变量，形参
{                       // 栈区注意事项，不可返回局部变量的地址,除非局部静态变量
    static int a = 10;         // 栈区的数据由编译器管理开辟和释放
    return &a;
}

int main()
{
    int b = 20;
    int * p = func(b);
    cout << (int)*p << endl;
    cout << (int)*p << endl;
}