#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
//std::scientific;
//std::fixed;
//cout.precision(10000);
cout.setf(ios::fixed);
cout.precision(2);
string cozasyf,cozasyf2;
long double tab1[2000]={};
long double tab2[2000]={};
long double tab3[2000]={};
long double tab4[2000]={};
unsigned long long int tabpoteg1[10000]={};
unsigned long long int tabpoteg2[10000]={};
unsigned long long int tabpoteg3[10000]={};
unsigned long long int roz1=0,roz2=0,tak;
for(long long int i=0;i<2000;i++)
{tab1[i]=112.66;
tab2[i]=112.66;
tab4[i]=112.66;}
for(unsigned long long int i=0;i<2000;i++)
{
cin>>tab1[i];
if(cin.peek()==' ')
{
getline(cin,cozasyf,' ');
}
if(cin.peek()=='\n')
{
break;
}
}
for(unsigned long long int i=0;i<2000;i++)
{
cin>>tab2[i];
if(cin.peek()==' ')
{
getline(cin,cozasyf2,' ');
}
if(cin.peek()=='\n')
{
break;
}
}
for(unsigned long long int i=0;i<2000;i++)
{
if(tab1[i]!=112.66){roz1=roz1+1;}
}
for(unsigned long long int i=0;i<2000;i++)
{
if(tab2[i]!=112.66){roz2=roz2+1;}
}
tak=roz1-1;
for(unsigned long long int i=0;i<=roz1;i++)
{
tabpoteg1[i]=tak;
tak=tak-1;
}
tak=roz2-1;
for(unsigned long long int i=0;i<=roz2;i++)
{
tabpoteg2[i]=tak;
tak=tak-1;
}
unsigned long long int tab3licz=0;
for(unsigned long long int i=0;i<roz1;i++)
{
for(unsigned long long int j=0;j<roz2;j++)
{
tab3[tab3licz]=tab1[i]*tab2[j];
tabpoteg3[tab3licz]=tabpoteg1[i]+tabpoteg2[j];
tab3licz=tab3licz+1;
}
}
unsigned long long int tab4licz=0;
unsigned long long int k=0;
long double sumujemy=0;
for(long long int i=tabpoteg3[0];i>=0;i--)
{
for(unsigned long long int j=0;j<=tab3licz;j++)
{
if(i==tabpoteg3[j])
{
sumujemy=sumujemy+tab3[j];
tab4licz=tab4licz+1;
}
}
tab4[k]=sumujemy;
sumujemy=0;
k=k+1;
}
int t=0;
for(unsigned long long int i=0;i<k;i++)
{
cout << tab4[i] << ' ';
}
return 0;
}
