#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    int z=0;
    int ile=11001;

    int tab[11001]={};
    for (int i=0;i<=1001;i++)
    {
        tab[i]=666;
    }
    //cin >> ile;
    for (int i=0;cin >> a;i++)
    {
    int tablicz[11001]={};
    //cin >> a;

    /////
    for (int n=0;n<=a.size()+1;n++)
    {
        if (isupper(a[n]))
            a[n]+=32;
    }

    int sajz=a.size()/2;



//cout << a << endl;

sort(a.begin(),a.end());

    //cout << "posortowany " << a <<endl;


    int liczyc=0;
    int licz=0;
    tablicz[0]=1;
    for (int k=0;k<a.size();k++)
    {
        liczyc=liczyc+1;
        if(a[k]==a[k+1])
        {
            tablicz[licz]=tablicz[licz]+1;
        }
        else
        {
            licz=licz+1;
            tablicz[licz]=tablicz[licz]+1;
        }
    }


    int zli=0;
    for(int m=0;tablicz[m]!=0;m++)
    {
        //cout << "tablicz" << tablicz[m];
        zli=m;
    }
    tablicz[zli]=0;

    //cout << endl;

    for(int m=0;tablicz[m]!=0;m++)
    {
        //cout << "tablicz" << tablicz[m];
    }


    int wyst=0;

    for(int m=0;tablicz[m]!=0;m++)
    {
        if(tablicz[m]%2!=0)
        {
            wyst=wyst+1;
        }
    }
    if (wyst>1)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
    z=z+1;




}
//cout << endl << "wynik ";
/*for(int m=0;tab[m]!=666;m++)
    {
        cout << tab[m];
    }*/
}
