#include "charge.h"


Charge::Charge(int v, bool st,Position* p)
{
    this->m_voltage = v;
    this->m_status  = st;
    this->m_position = p;
}


void Charge::print()
{
    cout<<"voltage: "<<this->m_voltage<<endl<<"status now "<<this->m_status<<endl;
    // count<<position<<endl;

    cout<<"position: x = "<<this->m_position->m_x<<endl;
    cout<<"position: y = "<<this->m_position->m_y<<endl;
    cout<<"position: angle = "<<this->m_position->m_angle<<endl;
}