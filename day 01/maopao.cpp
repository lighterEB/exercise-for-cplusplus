//
// Created by tosixJuly on 2020/12/25.
// 冒泡排序

#include <iostream>
using namespace std;

int main()
{
    int arry[9] = { 3,0,5,7,8,4,10,23,16};
    cout << "����ǰ��" << endl;
    for (int i : arry)
    {
        cout << i << endl;
    }
    // ð������
    for (int i = 0; i < 9 - 1; i++)
    {
        for(int j = 0; j< 9 - i - 1; j++)
        {
            if (arry[j + 1] < arry[j])
            {
                int temp = arry[j + 1];
                arry[j + 1] = arry[j];
                arry[j] = temp;

            }
        }
    }
    cout << "�����" << endl;
    for (int i : arry)
    {
        cout << i << endl;
    }
    return 0;
}