﻿//
// Created by tosixJuly on 2021/3/22.
//

#include <iostream>
using namespace std;

// 类做友元

class Building;

class GoodGay
{
public:
    GoodGay();
    void visit();

    Building* building;
};

class Building
{
    friend GoodGay;
public:
    Building();
    string m_SittingRoom;

private:
    string m_BedRoom;
};

Building::Building()
{
    m_SittingRoom = "Sitting Room";
    m_BedRoom = "Bed Room";
}

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << "GoodGay class is visited" << building->m_SittingRoom << endl;
    cout << "GoodGay class is visited" << building->m_BedRoom << endl;
}

void test01()
{
    GoodGay gy;
    gy.visit();
}
int main()
{
    test01();
    return 0;
}