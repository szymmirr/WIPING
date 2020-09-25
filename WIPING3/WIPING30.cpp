#include <iostream>
//ARMIA POLCYN
using namespace std;
int main()
{
    unsigned long long int bok, roznica=4, prawydolny=5;
    cin >> bok;
    if (bok==1)
        cout << 1;
    if (bok==3)
        cout << 5;
    if (bok>3)
    {
        for(int i=3;i<bok;i=i+2)
        {
            roznica=roznica+8;
            prawydolny=prawydolny+roznica;
        }
        cout << prawydolny;
    }
    return 0;
}
