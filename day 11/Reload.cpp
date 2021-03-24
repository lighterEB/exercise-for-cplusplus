//
// Created by tosixJuly on 2021/3/24.
//
#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream & operator << (ostream& cout, MyInteger myInteger);
public:
    MyInteger()
    {
        int m_Num = 10;
    }
    MyInteger& operator ++ ()
    {
        ++m_Num;
        return *this;
    }
    MyInteger& operator ++ (int)
    {
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }
private:
    int m_Num{};
};

ostream & operator << (ostream& cout, MyInteger myInteger)
{
    cout << myInteger.m_Num << endl;
    return cout;
}

void test01()
{
    MyInteger MyInt;
    cout << MyInt++ <<endl;
    cout << MyInt << endl;
}

int main()
{
    test01();
    return 0;
}
