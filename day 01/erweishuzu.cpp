//
// Created by tosixJuly on 2020/12/25.
// 二维数组-成绩统计

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //创建二维数组，3行3列
    int scores[3][3] = {
            {100, 80, 100},
            {95, 60, 87},
            {100, 100, 99}
    };

    string name[3] = {"张三", "李四", "王麻子"};
    int k = 0;
    for (auto &score : scores)
    {
        int sum = 0;
        for (int j : score)
        {
            sum += j;
        }
        cout << name[k] << "的总分： " << sum << endl;
        k++;
    }
}