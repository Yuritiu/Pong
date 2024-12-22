#pragma once
#include <iostream>
#include "cGameManager.cpp"

using namespace std;

int main()
{
    cGameManager c(40, 20);
    c.Run();
    return 0;
}

