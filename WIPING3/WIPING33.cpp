#include <iostream>

using namespace std;

int main()
{
    string wyr1,wyr2,wyrkopia;
    int poczatek,koniec,potencjalnadlugosc;
    cin>>wyr1;
    cin>>wyr2;
    wyrkopia=wyr1;

    for(int i=0;i<wyr1.length();i++)
    {
        if (wyr1[i]==wyr2[0])
        {
            poczatek=i;
            koniec=i;
            int j=i+1;
            for (int k=1;k<wyr2.length();k++)
            {
                if(wyr1[j]==wyr2[k])
                {
                    koniec=j;
                }
                j+=1;
            }
            potencjalnadlugosc=koniec-poczatek+1;
            if(potencjalnadlugosc==wyr2.length())
            {
                for (int l=poczatek;l<=koniec;l++)
                {
                    wyrkopia[l]=0;
                }
            }
        }
    }
    cout<<"\"";
    for(int i=0;i<wyr1.length();i++)
    {
        if(wyrkopia[i]!=0)
        {
            cout<<wyrkopia[i];
        }
    }
    cout<<"\"";
    cout << '\n';
    return 0;
}
