#include <iostream>
using namespace std;

#include "position.h"

class Charge
{
private:
    /* data */
public:
    Charge(/* args */) {}
    Charge(int v, bool st,Position* p); //初始化
    void print();
    ~Charge() {}

    int m_voltage; //当前充电电压
    bool m_status; //当前充电状态
    Position* m_position; //当前位置
};
