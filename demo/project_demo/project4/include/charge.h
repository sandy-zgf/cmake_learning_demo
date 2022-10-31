#include <iostream>
using namespace std;

class Charge
{
private:
    /* data */
public:
    Charge(/* args */) {}
    Charge(int v, bool st); //初始化
    void print();
    ~Charge() {}

    int m_voltage; //当前充电电压
    bool m_status; //当前充电状态
};
