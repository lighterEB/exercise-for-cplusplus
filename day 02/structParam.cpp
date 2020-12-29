//
// Created by tosixJuly on 2020/12/29.
//
#include <iostream>
using namespace std;

//若想修改主函数的数据用地址传递，反之用值传递。
//定义学生结构体
struct student
{
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};
//1.值传递
void printStudent1(struct student stu)
{
    cout << "子函数1中打印 姓名： " << stu.name
         << " 年龄：" << stu.age
         << " 分数：" << stu.score << endl;
}
//2.地址传递
void printStudent2(struct student* pStu)
{
    pStu->name = "胡爸爸";
    cout << "子函数2中打印 姓名： " << pStu->name
         << " 年龄：" << pStu->age
         << " 分数：" << pStu->score << endl;
}
int main()
{
    //结构体做函数参数
    //将学生传入到一个参数中，打印学生身上的所有信息

    //创建结构体变量
    struct student stu;
    stu.name = "张三";
    stu.age = 26;
    stu.score = 100;
    printStudent1(stu);
    printStudent2(&stu);

    cout << "main函数中打印 姓名： " << stu.name
         << " 年龄：" << stu.age
         << " 分数：" << stu.score << endl;


    return 0;
}
