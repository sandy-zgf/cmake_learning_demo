#include <iostream>
using namespace std;

// #include "../voltageManagement/include/voltageManagement.h"
#include "voltageManagement.h"

class Charge
{
private:
    VoltageManagement* vm;
    bool m_status; //当前充电状态
    /* data */
public:
    Charge(VoltageManagement *v, bool st);
    void print();
    ~Charge() {}
};
