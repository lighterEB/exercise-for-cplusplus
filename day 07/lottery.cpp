//
// Created by tosixJuly on 2021/1/15.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 双色球结构体
struct Balls
{
    int rBall[6];
    int bBall;
};

// 每一注号的结构体
struct Results
{
    struct Balls lines{};
    int lSize{};
};

// 检查红球有无重复
int checkRedBall(struct Results* b, int n)
{
    for (int i = 0; i < b->lSize; i++)
    {
        if (n == b->lines.rBall[i])
        {
            return -1;
        }
    }
    return 0;
}

// 机选双色球
void randomNumber(struct Results* b)
{

    int rBall = 0;
    int bBall = 0;
    b->lSize = 1;
    while (b->lSize < 7)
    {
        rBall = rand() % 33 + 1;
        if (checkRedBall(b, rBall) == 0)
        {
            b->lines.rBall[b->lSize - 1] = rBall;
            cout << rBall << " ";
            b->lSize++;
        }
        if (b->lSize == 7)
        {
            bBall = rand() % 16 + 1;
            b->lines.bBall = bBall;
            cout << "-- " << bBall << endl;
        }
    }
}
int main()
{
    struct Results b;
    int roll;
    cout << "Random number: " << endl;
    cin >> roll;
    srand(time(NULL));
    for(int i = 1; i <= roll; i++)
    {
        randomNumber(&b);
    }


    return 0;

}