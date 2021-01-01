//
// Created by tosixJuly on 2021/1/1.
//

#include <iostream>
using namespace std;

/*
	通讯录管理系统

*/

// 菜单显示
void showMenue()
{
    cout << "****** 1、添加联系人 ******" << endl;
    cout << "****** 2、显示联系人 ******" << endl;
    cout << "****** 3、删除联系人 ******" << endl;
    cout << "****** 4、查找联系人 ******" << endl;
    cout << "****** 5、清空联系人 ******" << endl;
    cout << "****** 0、退出通讯录 ******" << endl;
}
int main()
{
    showMenue();
    return 0;
}