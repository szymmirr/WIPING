#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
int d,i=0,brakujacespacje=0,dlugoscwyrazowlacznie=0,rozm2;
string tab[1000];
cin >> d;
while(true)
{
cin>>tab[i];
i+=1;
if(cin.eof())break;
}
int rozm=i-1;
int tabspacji[rozm];

memset(tabspacji, 0, sizeof(tabspacji));
//cout << rozm << " ";
rozm2=rozm+1;
for (int j=0;j<rozm2;j++)
{
dlugoscwyrazowlacznie=dlugoscwyrazowlacznie+tab[j].length();
}
dlugoscwyrazowlacznie=dlugoscwyrazowlacznie-2;
//cout << dlugoscwyrazowlacznie <<" ";
brakujacespacje=d-dlugoscwyrazowlacznie;
//cout << brakujacespacje << " ";
for(int k=0;brakujacespacje>0;k++)
{
for(int j=0;j<i-1;j++)
{
if(brakujacespacje>0)
{
tabspacji[j]+=1;
}
brakujacespacje-=1;
}
}
for(int j=0;j<i-1;j++)
{
cout << tab[j];
for (int k=0;k<tabspacji[j];k++)
{
cout << " ";
}
}
cout << tab[i-1];
cout << '\n';
return 0;
}
