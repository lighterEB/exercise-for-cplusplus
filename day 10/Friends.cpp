//
// Created by tosixJuly on 2021/3/22.
//

#include <iostream>
using namespace std;

class Building
{

public:
    string m_SittingRoom;

    Building()
    {
        m_SittingRoom = "Sitting Room";
        m_BedRoom = "Bed Room";
    }

private:
    string m_BedRoom;
};

void goodGay(Building* building)
{
    cout << "好基友的全局函数 正在访问 ：" << building->m_SittingRoom << endl;
}

void test01()
{
    Building building;
    goodGay(&building);
}