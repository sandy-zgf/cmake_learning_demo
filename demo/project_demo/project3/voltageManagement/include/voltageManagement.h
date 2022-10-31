#include <iostream>
using namespace std;

class VoltageManagement
{
private:
    int m_time;
    float m_voltage;
public:
    VoltageManagement(int t,float voltage);
    ~VoltageManagement() {}
};