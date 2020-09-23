#include <iostream>
#include <cmath>
using namespace std;
int main()
{string n;
long double a,z,zz;
cin>>n;
a=0;z=0;
long double dt;
dt=0;
long double dc;
long double dp;
for(int i=0;i<n.size();i++)
{if(n[i]==48)n[i]=0;
if(n[i]==49)n[i]=1;
if(n[i]==50)n[i]=2;
if(n[i]==51)n[i]=3;
if(n[i]==52)n[i]=4;
if(n[i]==53)n[i]=5;
if(n[i]==54)n[i]=6;
if(n[i]==55)n[i]=7;
if(n[i]==56)n[i]=8;
if(n[i]==57)n[i]=9;
dt=dt+n[i];}
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
if(r3==0)
{a=1;
cout<<3;}
if(r4==0)
{a=1;
cout<<4;}
if(n[n.size()-1]==0 || n[n.size()-1]==5)
{a=1;
cout << 5;}
if(a==0)
cout<<0;
return 0;
}
