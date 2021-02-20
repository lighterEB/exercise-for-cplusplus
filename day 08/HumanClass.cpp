//
// Created by tosixJuly on 2021/2/20.
//
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    // Private member data;
    string Name;
    int Age;
public:
    // constructor
    Human()
    {
        Age = 0; // initialized to ensure no junk value
        cout << "Constructed an instance of class Human" << endl;
    }

    void SetName(string HumansName)
    {
        Name = HumansName;
    }

    void SetAge(int HumansAge)
    {
        Age = HumansAge;
    }

    void IntroduceSelf()
    {
        cout << "I am " + Name << "and am ";
        cout << Age << " years old" << endl;
    }
};

int main()
{
    Human FirstMan;
    FirstMan.SetName("Eric");
    FirstMan.SetAge(28);

    Human FirstWoman;
    FirstWoman.SetName("Water");
    FirstWoman.SetAge(26);

    FirstMan.IntroduceSelf();
    FirstWoman.IntroduceSelf();
}