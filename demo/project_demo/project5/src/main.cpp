#include <iostream>
using namespace std;

#include "charge.h"

int main(int argc, char **argv)
{
    cout << "project 2" << endl;
    Position pos(3,4,5);
    Charge charge1(12, true,&pos);

    charge1.print();

    charge1.m_status = false;

    charge1.print();

    return 0;
}