#include <iostream>
#include <sstream>
using namespace std;
int proszeint(string s)
{
    stringstream sss(s);
    int t;
    sss >> t;
    return t;
}
bool czy_pierwsza(int n)
{
  if(n<2)
    return false;

  for(int i=2;i*i<=n;i++)
    if(n%i==0)
      return false;
  return true;
}
int main()
{
    string ciag,liczba;
    int liczbaint,suma=0,tab[99999]={},tablicznik=0,mozna=1;
    cin>>ciag;
    for(int k=3;k<10;k++)
    {
        for(int i=0;i<ciag.size()-k+1;i++)
        {
            liczba=ciag[i];
            for(int j=1;j<k;j++)
            {
                liczba+=ciag[i+j];
            }

            liczbaint=proszeint(liczba);
            //cout<<liczbaint<<endl;
            int a=liczbaint,d=0;
            while (a) { d+=1; a/=10; }
            mozna=1;
            if(d==k)
            {
                if((czy_pierwsza(liczbaint))==true)
                {
                    for(int m=0;m<tablicznik;m++)
                    {
                        if(tab[m]==0)
                        {
                            break;
                        }
                        if(liczbaint==tab[m])
                        {
                            mozna=0;
                            break;
                        }
                    }
                    if(mozna==1)
                    {
                        tab[tablicznik]=liczbaint;
                        tablicznik+=1;
                        suma+=1;
                        //cout<<"tak"<<endl;
                    }
                }
            }
        }
        if(k>=ciag.size())
        {
            break;
        }
    }
    cout<<suma;
    return 0;
}
