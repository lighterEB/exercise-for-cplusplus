//
// Created by tosixJuly on 2021/1/15.
//

#include <iostream>
using namespace std;

int main()
{
    // Request lots of memory space, use nothrow version
    int* pAge = new(nothrow) int [0x1fffffff];

    if(pAge)    // check pAge != NULL
    {
        // Use the allocated memory
        delete[] pAge;
    }
    else
    {
        cout << "Memory allocated failed. Ending program" << endl;
    }

    return 0;
}