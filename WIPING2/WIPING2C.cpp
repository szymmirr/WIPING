#include <iostream>

using namespace std;

unsigned long long silnia=1;

unsigned long long rekur(unsigned long long z)
{
    silnia=1;
    if(z>=1)
        silnia=z*rekur(z-1);
    return silnia;
}

int main()
{
    //long double reszta;
    unsigned long long z,o,calosci,n,reszta;
    unsigned long long tab[99999];
    for(int k=0;k<99999;k++)
    {
        tab[k]=66766;
    }
    cin >> n;
    if (n==0)
    {
        cout << 0;
        return 0;
    }
    o=n;
    int i;
    for(i=0;o>0;i++)
    {
        o=o/10;
    }
    if(i==0)i=1;
    int dlugosc=i;
    reszta=n;
    int j=0,swicz=0;
    for(dlugosc+=2;dlugosc>0;dlugosc--)
    {
        calosci=reszta/rekur(dlugosc);
        reszta=reszta%rekur(dlugosc);
        //cout << "calosci: " << calosci << "reszta: " << reszta << endl;
        tab[j]=calosci;
        j=j+1;
    }
    for(int k=0;k<99999;k++)
{
    if(tab[k]!=0)
        {
            swicz=1;
        }
    if(swicz==1)
    {
    if(tab[k]!=66766)
    {
        cout << tab[k];
    }
    }
}
    return 0;
}
