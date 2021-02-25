//
// Created by tosixJuly on 2021/2/23.
//

#include <iostream>
using namespace std;

class MyString
{
private:
    char* Buffer;

public:
    // Constructor
    MyString(const char* InitialInput)
    {
        if(InitialInput != NULL)
        {
            Buffer = new char [strlen(InitialInput) + 1];
            strcpy(Buffer, InitialInput);
        } else
            Buffer = NULL;
    }

    //Destructor: clears the buffer allocated in constructor
    ~MyString()
    {
        cout << "Invoking destructor, clearing up" << endl;
        if(Buffer != NULL)
            delete [] Buffer;
    }

    int GetLength()
    {
        return strlen(Buffer);
    }

    const char* GetString()
    {
        return Buffer;
    }
};// end of class MyString

int main()
{
    MyString SayHello("Hello from String Class");
    cout << "String buffer in Mystring is " << SayHello.GetLength();
    cout << " characters long" << endl;

    cout << "Buffer contains: ";
    cout << "Buffer contains: " << SayHello.GetString() << endl;
}