#include <iostream>
using namespace std;
int main()
{
string n,w;
cin>>n;
if(n.size()==3&&n[1]=='p')
{
w='0';
w+=n[0];
w+='0';
}
else if(n.size()==4&&n[2]=='p')
{
w=n[0];
w+=n[1];
w+='0';
}
else if(n.size()==4&&n[2]=='p')
{
w='0';
w+=n[0];
w+='1';
}
else if(n.size()==5&&n[3]=='p'&&n[2]=='0')
{
w=n[0];
w+=n[1];
w+='1';
}
else if(n.size()==5&&n[3]=='p'&&n[1]=='0'&&n[2]=='0')
{
w='0';
w+=n[0];
w+='2';
}
else if(n.size()==3&&n[1]=='n')
{
w=n[0];
w+='0';
w+='2';
}
else if(n.size()==5&&n[1]==','&&n[3]=='n')
{
w=n[0];
w+=n[2];
w+='2';
}
else if(n.size()==3&&n[1]=='n')
{
w='0';
w+=n[0];
w+='3';
}
else if(n.size()==4&&n[2]=='n')
{
w=n[0];
w+=n[1];
w+='3';
}
else if(n.size()==4&&n[2]=='n')
{
w='0';
w+=n[0];
w+='4';
}
else if(n.size()==5&&n[3]=='n'&&n[2]=='0')
{
w=n[0];
w+=n[1];
w+='4';
}
else if(n.size()==5&&n[3]=='n'&&n[1]=='0'&&n[2]=='0')
{
w='0';
w+=n[0];
w+='5';
}
else if(n.size()==3&&n[1]=='u')
{
w=n[0];
w+='0';
w+='5';
}
else if(n.size()==5&&n[1]==','&&n[3]=='u')
{
w=n[0];
w+=n[2];
w+='5';
}
else if(n.size()==3&&n[1]=='u')
{
w='0';
w+=n[0];
w+='6';
}
else if(n.size()==4&&n[2]=='u')
{
w=n[0];
w+=n[1];
w+='6';
}
else if(n.size()==4&&n[2]=='u')
{
w='0';
w+=n[0];
w+='7';
}
else if(n.size()==5&&n[3]=='u'&&n[2]=='0')
{
w=n[0];
w+=n[1];
w+='7';
}
else if(n.size()==5&&n[3]=='u'&&n[1]=='0'&&n[2]=='0')
{
w='0';
w+=n[0];
w+='8';
}
else if(n.size()==3&&n[1]=='m')
{
w=n[0];
w+='0';
w+='8';
}
else if(n.size()==5&&n[1]==','&&n[3]=='m')
{
w=n[0];
w+=n[2];
w+='8';
}
else if(n.size()==3&&n[1]=='m')
{
w='0';
w+=n[0];
w+='9';
}
else if(n.size()==4&&n[2]=='m')
{
w=n[0];
w+=n[1];
w+='9';
}
else
{
w="ERR";
}
cout<<w;
cout<<endl;
return 0;
}
