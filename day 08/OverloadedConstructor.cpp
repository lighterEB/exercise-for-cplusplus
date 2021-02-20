//
// Created by tosixJuly on 2021/2/20.
//

#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    // Private member data
    string Name;
    int Age;

public:
    // Constructor
    Human()
    {
        Age = 0; // initialized to ensure no junk value
        cout << "Default constructor create an instance of Human" << endl;
    }

    // Overloaded constructor that takes Name
    Human(string HumansName)
    {
        Name = HumansName;
        Age = 0; // initialized to ensure no junk value
        cout << "Overloaded constructor creates " << Name << endl;
    }

    // Overloaded constructor that takes Age
    Human(string HumansName, int HumansAge)
    {
        Name = HumansName;
        Age = HumansAge;
        cout << "Overloaded constructor creates ";
        cout << Name << "of " << Age << " years" << endl;
    }

    void setName(string HumansName)
    {
        Name = HumansName;
    }

    void setAge(int HumansAge)
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
    Human FirstMan; // use default constructor
    FirstMan.setName("Adam");
    FirstMan.setAge(30);

    Human FirstWoman("Eve"); // use overloaded constructor
    FirstWoman.setAge(28);

    Human FirstChild("Rose", 2);

    FirstMan.IntroduceSelf();
    FirstWoman.IntroduceSelf();
    FirstChild.IntroduceSelf();
}