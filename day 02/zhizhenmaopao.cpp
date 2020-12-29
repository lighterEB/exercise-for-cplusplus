//
// Created by tosixJuly on 2020/12/29.
//

#include <iostream>
using namespace std;

void BubbleSort(int* arry, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int* a = arry;
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (*a > *(a + 1))
            {
                int temp = *a;
                *a = *(a + 1);
                *(a + 1)= temp;
            }
            a++;
        }
    }
}

int main()
{
    int arry[9] = { 4, 5, 6, 1, 3, 20, 16, 18, 12 };
    int len = 9;
    BubbleSort(arry, len);
    for (int i : arry)
    {
        cout << i << endl;
    }
    return 0;
}