//
// Created by tosixJuly on 2021/1/4.
//
#include <iostream>
using namespace std;
//交换函数

// 1、值传递
void vSwap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "a = " << x << endl;
    cout << "b = " << y << endl;
}
// 2、地址传递
void aSwap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "&a = " << x << endl;
    cout << "&b = " << y << endl;
    cout << "a = " << *x << endl;
    cout << "b = " << *y << endl;
}
// 3、引用传递
int main()
{
    int a = 10;
    int b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    vSwap(a, b);  // 值传递，形参不修饰实参
    aSwap(&a, &b); // 地址传递，形参修饰实参

}