//
// Created by tosixJuly on 2021/1/5.
//
#include <iostream>
using namespace std;

//引用做函数的返回值
//1、不要返回局部变量的引用
int& test01()
{
    int a = 10; //局部变量存放在四区中的 栈区
    return a;
}

//2、函数的调用可以作为左值
int& test02()
{
    static int a = 10; //局部变量存放在四区中的 栈区
    return a;
}

int main()
{
    int &ref = test01();
    cout << ref << endl;

    return 0;
}