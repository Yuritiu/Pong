#pragma once
#include <iostream>
#include "cBall.cpp"
using namespace std;



int main()
{
    cBall c(0, 0);

    cout << c << endl;
    c.randomDirection();
    cout << c << endl;
    c.Move();
    cout << c << endl;
    c.randomDirection();
    c.Move();
    cout << c << endl;
    c.randomDirection();
    c.Move();
    cout << c << endl;

    return 0;
}

