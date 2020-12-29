//
// Created by tosixJuly on 2020/12/29.
//

#include <iostream>
using namespace std;

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
//定义老师结构体
struct teacher
{
    //编号
    int id;
    //姓名
    string name;
    //年龄
    int age;
    //辅导的学生
    struct student stu;
};

int main()
{
    //结构体嵌套
    //创建老师
    teacher teacher;
    teacher.id = 10086;
    teacher.name = "黄维";
    teacher.age = 27;
    teacher.stu.name = "小明";
    teacher.stu.age = 16;
    teacher.stu.score = 98;
    cout << "老师id：" << teacher.id << " 老师姓名：" << teacher.name << " 老师年龄：" << teacher.age
         << " 老师辅导学生：" << teacher.stu.name << " 老师辅导学生的年龄：" << teacher.stu.age <<
         " 老师辅导学生的分数：" << teacher.stu.score << endl;
    return 0;
}