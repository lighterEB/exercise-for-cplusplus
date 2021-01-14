//
// Created by tosixJuly on 2021/1/14.
//
#include <iostream>
using namespace std;

int main()
{
    try
    {
        //Request lots of memory space
        int* pAge = new int [536870911];
        // Use the allocated memory
        delete[] pAge;
    }
    catch (bad_alloc)
    {
        cout << "Memory allocation failed. Ending program" << endl;
    }

    return 0;
}
