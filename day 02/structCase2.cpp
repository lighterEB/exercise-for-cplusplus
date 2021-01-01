//
// Created by tosixJuly on 2020/12/30.
//
#include <iostream>
using namespace std;

//案例二
//结构体数组冒泡排序
struct Hero
{
    //英雄名称
    string name;
    //英雄年龄
    int age;
    //英雄性别
    string sex;
};

//冒泡排序函数
void bubbleSort(struct Hero* hero, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (hero[j].age > hero[j + 1].age)
            {
                Hero temp = hero[j + 1];
                hero[j + 1] = hero[j];
                hero[j] = temp;
            }
        }
    }
}
//打印信息函数
void printInfo(struct Hero* hero, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "英雄名称： " << hero[i].name
             << " 英雄年龄：" << hero[i].age
             << " 英雄性别：" << hero[i].sex << endl;
    }
}

int main()
{
    //1、创建英雄结构体数组
    Hero hero[5] = {
            {"刘备", 33, "男" },
            {"李大钊", 26, "男"},
            {"王二小", 8, "男"},
            {"哪吒", 13, "男"},
            {"貂蝉", 18, "女"},
    };
    int len = sizeof(hero) / sizeof(hero[0]);
    //2、冒泡排序
    bubbleSort(hero, len);
    //3、输出排序后的结果
    printInfo(hero, len);
    return 0;
}
