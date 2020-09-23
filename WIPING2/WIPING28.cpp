#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //ARMIA POLCYN
    //facebook.com/armiapolcyn
    cout.setf(ios::fixed);
    cout.precision(2);
    long double k,p,n,wynik1,wynikrazem,potega;
    cin >> k >> p >> n;
    wynik1=(1+(p/100));
    potega=pow(wynik1,n);
    wynikrazem=k*potega;
    unsigned long long bezprzec,poprzec;
    bezprzec=wynikrazem;
    poprzec=(wynikrazem-bezprzec)*100;
    cout << bezprzec << ",";
    if(poprzec>10)
    {
        cout << poprzec;
    }
    else if (poprzec<10)
    {
        cout  << "0" << poprzec;
    }
    else
    {
        cout << "00";
    }
    return 0;
}

