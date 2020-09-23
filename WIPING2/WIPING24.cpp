#include <iostream>
#include <math.h>

using namespace std;

int main()
{
long double x1,y1,x2,y2,x3,y3,xx1,yy1,prz1,xx2,yy2,prz2,xx3,yy3,prz3,a,b,c,prz11,prz22,prz33;
cin >> x1;
cin >> y1;
cin >> x2;
cin >> y2;
cin >> x3;
cin >> y3;
a=1;
b=0;
c=0;
if(x1>x2)xx1=x1-x2;
else if(x1<x2)xx1=x2-x1;
if(x1==x2)
{
if(y1>y2)
{
prz1=(y1-y2)*(y1-y2);
}
if(y1<y2)
{
prz1=(y2-y1)*(y2-y1);
}
}
if(y1>y2)yy1=y1-y2;
else if(y1<y2)yy1=y2-y1;
if(y1==y2)
{
if(x1>x2)
{
prz1=(x1-x2)*(x1-x2);
}
if(x1<x2)
{
prz1=(x2-x1)*(x2-x1);
}
}
if(x1!=x2&&y1!=y2)prz1=(xx1*xx1)+(yy1*yy1);
//cout << "Bok 1.0 wynosi" << prz1 << endl;
if(x2>x3)xx2=x2-x3;
else if(x2<x3)xx2=x3-x2;
if(x2==x3)
{
if(y2>y3)
{
prz2=(y2-y3)*(y2-y3);
}
if(y2<y3)
{
prz2=(y3-y2)*(y3-y2);
}
}
if(y2>y3)yy2=y2-y3;
else if(y2<y3)yy2=y3-y2;
if(y2==y3)
{
if(x2>x3)
{
prz2=(x2-x3)*(x2-x3);
}
if(x2<x3)
{
prz2=(x3-x2)*(x3-x2);
}
}
if(x3!=x2&&y3!=y2)prz2=(xx2*xx2)+(yy2*yy2);
//cout << "Bok 2.0 wynosi" << prz2 << endl;
if(x3>x1)xx3=x3-x1;
else if(x3<x1)xx3=x1-x3;
if(x3==x1)
{
if(y3>y1)
{
prz3=(y3-y1)*(y3-y1);
}
if(y3<y1)
{
prz3=(y1-y3)*(y1-y3);
}
}
if(y3>y1)yy3=y3-y1;
else if(y3<y1)yy3=y1-y3;
if(y3==y1)
{
if(x3>x1)
{
prz3=(x3-x1)*(x3-x1);
}
if(x3<x1)
{
prz3=(x1-x3)*(x1-x3);
}
}
if(x3!=x1&&y3!=y1)prz3=(xx3*xx3)+(yy3*yy3);
//cout << "Bok 3.0 wynosi" << prz3 << endl;

if(x1==x2 && x2==x3)a=0;
if(y1==y2 && y2==y3)a=0;
if(x3==x2 && y2==y3)a=0;
if(x1==x3 && y1==y3)a=0;
if(x1==x2 && y1==y2)a=0;

if(a==0)
{
cout<<0;
return 0;
}
if(a==1)cout<<1;

if(prz1==prz2 || prz2==prz3 || prz1==prz3)
{
b=2;
cout<<b;
}
prz11=prz1*prz1;
prz22=prz2*prz2;
prz33=prz3*prz3;
if(prz1==prz2+prz3)
{
c=3;
cout << c;
}
if(prz2==prz1+prz3)
{
c=3;
cout << c;
}
if(prz3==prz2+prz1)
{
c=3;
cout << c;
}
return 0;
}
