#include <iostream>
using namespace std;
void main()
{
    int f1, f2;

    cout << "Enter two numbers: ";
    cin >> f1 >> f2;
    
    while(f1 != f2)
    {
        if(f1 > f2)
            f1 -= f2;
        else
            f2 -= f1;
    }

    cout << "HCF = " << f1;
}
