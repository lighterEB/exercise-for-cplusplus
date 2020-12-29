//
// Created by tosixJuly on 2020/12/29.
//
#include <iostream>
using namespace std;

//const使用场景
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

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//const防止数据被修改
void printStudents(const student* stu)
{
    cout << "姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
}
int main()
{
    //创建结构体变量
    struct student stu = { "张三", 15, 70 };

    //通过函数打印结构体变量的信息
    printStudents(&stu);

    return 0;
}