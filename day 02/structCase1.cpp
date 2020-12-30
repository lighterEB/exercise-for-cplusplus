//
// Created by tosixJuly on 2020/12/29.
//
#include <iostream>
#include <ctime>
using namespace std;

//案例一
//定义学生结构体
struct Student
{
    //姓名
    string sName;
    //年龄
    int sAge;
    //分数
    int sScore;
};
//定义老师结构体
struct Teacher
{
    //老师姓名
    string tName;
    //老师编号
    int tId;
    //老师年龄
    int tAge;
    //老师辅导的学生
    Student tStu[5];
};
//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    //给老师开始赋值
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        //通过循环给每名老师所带的学生
        for (int j = 0; j < 5; j++)
        {
            tArray[i].tStu[j].sName = "Student_";
            tArray[i].tStu[j].sName += nameSeed[j];
            int rank = rand() % 61 + 40;
            tArray[i].tStu[j].sScore = rank;
        }
    }
}
//打印老师和学生信息函数
void printInfo(struct Teacher* tArray, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名：" << tArray[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t学生姓名： " << tArray[i].tStu[j].sName <<
                 " 考试分数：" << tArray[i].tStu[j].sScore << endl;
        }
    }
}

int main()
{
    //随机数种子
    srand((unsigned int)time(NULL));
    //1、创建3名老师的数组
    struct Teacher tArray[3];
    //2、通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);
    //3、打印所有老师学生信息
    printInfo(tArray, len);
    return 0;
}