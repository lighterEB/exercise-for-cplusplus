//
// Created by tosixJuly on 2021/1/1.
//
/*
    通讯录管理系统
*/

#include <iostream>
#define MAX 1000
using namespace std;


// 菜单显示
void showMenue()
{
    cout << "***************************" << endl;
    cout << "****** 1、添加联系人 ******" << endl;
    cout << "****** 2、显示联系人 ******" << endl;
    cout << "****** 3、删除联系人 ******" << endl;
    cout << "****** 4、查找联系人 ******" << endl;
    cout << "****** 5、清空联系人 ******" << endl;
    cout << "****** 0、退出通讯录 ******" << endl;
    cout << "***************************" << endl;
}

// 联系人结构体
struct Person
{
    string name;    // 联系人名字
    int sex{};     // 性别
    int age{};    //年龄
    string phoneNum{};   // 电话
    string address; // 地址
};
// 通讯录结构体
struct ContactManage
{
    struct Person personArray[MAX];
    int mSize{};  // 通讯录人数数量
};

// 添加联系人函数
void addPerson(struct ContactManage* cm)
{
    // 判断通讯录是否满，满了就退出
    if (cm->mSize == MAX)
    {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    }
    else
    {
        // 添加具体联系人

        // 姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        cm->personArray[cm->mSize].name = name;
        // 性别
        int sex = 0;
        while (true)
        {
            cout << "请输入性别：" << endl;
            cout << "1.------ 男" << endl;
            cout << "2.------ 女" << endl;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                break;
            }
            else
            {
                cout << "输入有误请重新输入！" << endl;
                continue;
            }
        }
        cm->personArray[cm->mSize].sex = sex;
        // 年龄
        int age;
        cout << "请输入年龄：" << endl;
        cin >> age;
        cm->personArray[cm->mSize].age = age;
        // 电话
        string phone;
        cout << "请输入电话：" << endl;
        cin >> phone;
        cm->personArray[cm->mSize].phoneNum = phone;
        // 住址
        string address;
        cout << "请输入住址：" << endl;
        cin >> address;
        cm->personArray[cm->mSize].address = address;
        // 更新通讯录
        cm->mSize++;
        cout << "添加成功！" << endl;
    }
}

// 显示联系人函数
void showPerson(ContactManage* cm)
{
    // 判断通讯录记录是否为空，如果为空提示记录为空
    // 如果不为0，显示记录中的联系人
    if(cm->mSize == 0)
    {
        cout << "通讯录为空" << endl;
    }
    else
    {
        cout << "联系人信息：" << endl;
        for(int i = 0; i < cm->mSize; i++)
        {
            cout << "姓名：" << cm->personArray[i].name << "\t"
                    << "年龄：" << cm->personArray[i].age << "\t"
                    << "性别：" << cm->personArray[i].sex << "\t"
                    << "电话：" << cm->personArray[i].phoneNum << "\t"
                    << "住址：" << cm->personArray[i].address << "\t" << endl;
        }
    }
}

int main()
{
    ContactManage cm;
    cm.mSize = 0;
    int select = 0; // 创建选择变量
    // 菜单调用
    while (true)
    {
        showMenue();
        cin >> select;
        switch (select) {
            case 1:     // 添加联系人
                addPerson(&cm);     //利用地址传递修改实参
                break;
            case 2:     // 显示联系人
                showPerson(&cm);
                break;
            case 3:     // 删除联系人
                break;
            case 4:     // 查找联系人
                break;
            case 5:     // 修改联系人
                break;
            case 6:     // 清空联系人
                break;
            case 0:     // 退出通讯录
                cout << "欢迎下次使用！" << endl;
                return 0;
        }
    }
}