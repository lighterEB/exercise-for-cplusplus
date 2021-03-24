//
// Created by tosixJuly on 2021/3/24.
//
#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream & operator << (ostream& cot, MyInteger MyInt);
public:
    MyInteger()
    {
        m_Num = 5;
    }
    MyInteger& operator -- ()
    {
        --m_Num;
        return *this;
    }
    MyInteger operator -- (int)
    {
        MyInteger temp = *this;
        m_Num--;
        return temp;
    }
private:
    int m_Num;
};

ostream & operator << (ostream& cot, MyInteger MyInt)
{
    cout << MyInt.m_Num << endl;
    return cot;
}

void test01()
{
    MyInteger MyInt;
    cout << MyInt-- << endl;
    cout << MyInt << endl;
}

int main()
{
    test01();
    return 0;
}