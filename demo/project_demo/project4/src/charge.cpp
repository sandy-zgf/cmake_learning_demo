#include "charge.h"


Charge::Charge(int v, bool st)
{
    this->m_voltage = v;
    this->m_status  = st;
}


void Charge::print()
{
    cout<<"voltage: "<<this->m_voltage<<endl<<"status now "<<this->m_status<<endl;
}