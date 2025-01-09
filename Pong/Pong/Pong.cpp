#pragma once
#include <iostream>
#include "cGameManager.cpp"
#include "window.h"

using namespace std;

int main()
{
    cGameManager c(80, 25);
    Window w;
 
    w.setWindow(80, 25);
    c.Run();
    return 0;
}

