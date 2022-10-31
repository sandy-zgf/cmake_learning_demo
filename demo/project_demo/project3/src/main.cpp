#include <iostream>
using namespace std;

#include "charge.h"

int main(int argc, char **argv)
{
    VoltageManagement vm1(32,12.3);

    Charge chargeNo1(&vm1,true);
    cout <<"project 2"<<endl;
    // Charge charge1(12,true);

    chargeNo1.print();

    return 0;
}