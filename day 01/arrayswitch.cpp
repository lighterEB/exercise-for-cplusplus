//
// Created by tosixJuly on 2020/12/25.
// 一维数组-元素逆置

#include <iostream>
using namespace std;

int main()
{
    //实现数组元素逆置
    //1、创建数组
    int arr[5] = { 1,2,3,4,5 };
    cout << "逆置前：" << endl;
    for (int i : arr)
    {
        cout << i << endl;
    }
    //2、实现逆置
    //2.1记录起始下标位置
    //2.2记录结束下标位置
    //2.3起始下标与结束下标的元素互换
    //2.4起始位置++，结束位置--
    //2.5循环执行2.1操作，直到起始位置>=结束位置
    int start = 0;
    int end = 4;
    for( int i = 0; i<5; i++)
    {
        if( start < end )
        {
            int temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
            start++;
            end--;
        }
    }
    cout << "逆置后：" << endl;
    for (int i : arr)
    {
        cout << i << endl;
    }

    return 0;
}