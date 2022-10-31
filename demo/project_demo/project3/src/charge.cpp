#include "charge.h"


Charge::Charge(VoltageManagement* v, bool st):vm(v),m_status(st)
{
    cout << "charge is ready" << endl;
}


void Charge::print()
{
    cout<<"status now "<<this->m_status<<endl;
}