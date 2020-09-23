#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string n;
    long double licz11=0, licz12=0, przelacznik=1, sumanieparz=0, sumaparz=0, jedenascie=0,dt=0,dc=0,z=0,zz=0;
    for (int i=0;cin>>n;i++)
    {
        przelacznik=1, sumanieparz=0, sumaparz=0, jedenascie=0,dt=0,dc=0,z=0,zz=0;
        for(int i=n.size()-1;i>=0;i--)
        {
        if(n[i]==48)n[i]=0;
        if(n[i]==49)n[i]=1;
        if(n[i]==50)n[i]=2;
        if(n[i]==51)n[i]=3;
        if(n[i]==52)n[i]=4;
        if(n[i]==53)n[i]=5;
        if(n[i]==54)n[i]=6;
        if(n[i]==55)n[i]=7;
        if(n[i]==56)n[i]=8;
        if(n[i]==57)n[i]=9;
        dt=dt+n[i];
        if (przelacznik==1)
        {
            sumanieparz+=n[i];
            przelacznik=2;
        }
        else if (przelacznik==2)
        {
            sumaparz+=n[i];
            przelacznik=1;
        }
        }
        if(n[n.size()-2]==0)z=0;
        if(n[n.size()-2]==1)z=10;
        if(n[n.size()-2]==2)z=20;
        if(n[n.size()-2]==3)z=30;
        if(n[n.size()-2]==4)z=40;
        if(n[n.size()-2]==5)z=50;
        if(n[n.size()-2]==6)z=60;
        if(n[n.size()-2]==7)z=70;
        if(n[n.size()-2]==8)z=80;
        if(n[n.size()-2]==9)z=90;
        zz=n[n.size()-1];
        dc=z+zz;

        long double r3=fmod(dt,3);
        long double r4=fmod(dc,4);
        jedenascie=sumanieparz-sumaparz;
        long double r11=fmod(jedenascie,11);
        if(r11==0)
        {
            licz11+=1;
        }
        if(r3==0&&r4==0)
        {
            licz12+=1;
        }
    }
    cout << licz11 << endl << licz12;
    return 0;
}

