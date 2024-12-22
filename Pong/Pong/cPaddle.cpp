#include <iostream>
using namespace std;


class cPaddle
{
private:
    int x, y;
    int originalX, originalY;

public:
    cPaddle(int posX, int posY)
    {
        originalX = posX;
        originalY = posY;
        x = originalX;
        y = originalY;
    }

    inline void Reset() { x = originalX; y = originalY; }
    inline int getX() { return x; }
    inline int getY() { return y; }
    inline void MoveUp() { y--; }
    inline void MoveDown() { y++; }

    friend ostream & operator << (ostream & o, cPaddle c)
    {
        o << "Ball [" << c.x << "," << c.y << "]";
        return o;
    }

};