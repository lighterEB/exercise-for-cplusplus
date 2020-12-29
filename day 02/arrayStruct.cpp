//
// Created by tosixJuly on 2020/12/29.
//

#include <iostream>
using namespace std;

//结构体数组
//1、定义结构体
struct Student
{
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};

int main()
{
    //2、创建结构体数组
    struct Student stuArray[3] =
            {
                    {"张三", 18, 100},
                    {"李四", 28, 80},
                    {"王五", 8, 90},
            };

    //3、给结构体数组中的元素赋值
    stuArray[2].name = "赵柳";
    stuArray[2].age = 80;
    stuArray[2].score = 60;

    //4、遍历结构体数组
    for (auto & i : stuArray)
    {
        cout << "姓名：" << i.name
             << " 年龄：" << i.age
             << " 分数：" << i.score << endl;
    }
    return 0;
}