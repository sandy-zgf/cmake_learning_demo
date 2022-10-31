#include <iostream>
using namespace std;

void swap_bsp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}

int main(int argc, char **argv)
{
    int a,b;
    a = 10;
    b = 100;
    swap_bsp(a,b);
    cout<< "shangdi bilibili ßÙÁ¨ßÙÁ¨!!!"<< endl;
    cout<< "a = "<<a<<"  b = "<<b<< endl;
}