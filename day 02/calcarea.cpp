//
// Created by tosixJuly on 2020/12/28.
//

#include <iostream>
using namespace std;

void CalcArea(const double* const pPi, const double* const pRadius, double* const pArea)
{
    if(pPi && pRadius && pArea)
    {
        *pArea = (*pPi) * (*pRadius) * (*pRadius);
    }
}

int main()
{
    double const Pi = 3.1415926;
    double Radius = 0;
    cout << "Enter radius: " << endl;
    cin >> Radius;
    double Area = 0;
    CalcArea(&Pi, &Radius, &Area);

    cout << "Area is: " << Area << endl;

    return 0;
}