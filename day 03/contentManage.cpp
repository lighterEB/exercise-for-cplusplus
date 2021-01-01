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
    cout << "*************************" << endl;
    cout << "****** 1、添加联系人 ******" << endl;
    cout << "****** 2、显示联系人 ******" << endl;
    cout << "****** 3、删除联系人 ******" << endl;
    cout << "****** 4、查找联系人 ******" << endl;
    cout << "****** 5、清空联系人 ******" << endl;
    cout << "****** 0、退出通讯录 ******" << endl;
    cout << "*************************" << endl;
}
int main()
{
    int select = 0; // 创建选择变量
    // 菜单调用
    while (true)
    {
        showMenue();
        cin >> select;
        switch (select) {
            case 1:     // 添加联系人
                break;
            case 2:     // 显示联系人
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
                cout << "欢迎下次使用！"<<endl;
                return 0;
        }
    }
    return 0;
}