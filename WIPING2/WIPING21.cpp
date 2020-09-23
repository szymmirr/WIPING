#include <iostream>

using namespace std;

int main()
{
int n, w, w1, w2, a, b, c, d, wyst1, wyst2, byl;
w=1;
wyst1=0;
wyst2=0;
w1=0;
w2=0;
byl=0;
cin>>n;
int t[n][n];
for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    cin>>t[i][j];
}


for(int i=1;i<n;i++)
{
if (t[i][0]!=t[0][i])
{
a=t[i][0];
b=t[0][i];
if(a<0 || b<0)
{
    byl=1;
    a=a/(-1);
    if (a!=b)
    {
        wyst1=1;
    }
}
}
}
if (byl==1)
{
    w=-1;
}

if (wyst1==1)
{
    w=0;
}


if (w==1)
{
for(int i=1;i<n;i++)
{
if (t[i][0]!=t[0][i])
{
wyst2=1;
}
}
if (wyst2==1)
{
    w=0;
}
}
cout << w;
return 0;
}