#include <iostream>
using namespace std;

class Position
{
private:
    /* data */
public:
    Position(int x,int y,int a):m_x(x),m_y(y),m_angle(a) {
        cout << "position is OK" << endl;
    }
    void print();
    ~Position() {}

    int m_x;
    int m_y;
    int m_angle;
};