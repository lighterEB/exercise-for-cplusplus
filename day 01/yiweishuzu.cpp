//
// Created by tosixJuly on 2020/12/25.
// 一维数组-五只小猪找最重

#include <iostream>
using namespace std;

int main()
{
    //1、创建五只小猪体重的数组
    int arr[5] = { 300,350,200,400,250 };
    //2、从数组中找最大值
    int max = 0; //先认定一个最大值
    for (int i : arr)
    {
        if(i>max)
        {
            max = i;
        }
    }
    //3、打印最大值
    cout << "小猪的最大体重："<< max << endl;

    return 0;
}
