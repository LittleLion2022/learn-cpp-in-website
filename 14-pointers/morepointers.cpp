#include<iostream>
using namespace std;
int main()
{
    int firstvalue = 5,secondvalue = 15;
    int *p1,*p2;

    p1 = &firstvalue;
    p2 = &secondvalue;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;

    cout << "first value is " << firstvalue << endl;
    cout << "second value is " << secondvalue << endl;
    return 0;
}