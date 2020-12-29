//
// Created by tosixJuly on 2020/12/29.
//

#include <iostream>
using namespace std;

//结构体指针
//定义结构体
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
    //1、创建学生的结构体变量
    struct Student student = { "张三", 18, 100 };

    //2、通过指针指向结构体变量
    struct Student* pStruct = &student;

    //3、通过指针访问结构体变量中的数据
    cout << "姓名：" << pStruct->name
         << " 年龄：" << pStruct->age
         << " 分数：" << pStruct->score << endl;

    return 0;
}