#include<iostream>
using namespace std;
int main(){
string a;
int ost,zero=0;
cin>>a;
if(a[a.length()-1]=='0')ost=0;if(a[a.length()-1]=='1')ost=1;if(a[a.length()-1]=='2')ost=2;if(a[a.length()-1]=='3')ost=3;if(a[a.length()-1]=='4')ost=4;if(a[a.length()-1]=='5')ost=5;if(a[a.length()-1]=='6')ost=6;if(a[a.length()-1]=='7')ost=7;if(a[a.length()-1]=='8')ost=8;if(a[a.length()-1]=='9')ost=9;
if(ost==0){if(a[0]!='0'){cout << a[0];}cout<<a[1]<<"pF";}
if(ost==1){if(a[0]!='0'){cout << a[0];}cout<<a[1]<<"0"<<"pF";}
if(ost==2)
{
if(a[0]=='0')cout<<a[1]<<"00"<<"pF";else if(a[1]=='0')cout<<a[0]<<"nF";else cout<<a[0]<<","<<a[1]<<"nF";
}
if(ost==3){if(a[0]!='0'){cout<<a[0];}cout<<a[1]<<"nF";}
if(ost==4){if(a[0]!='0'){cout<<a[0];}cout<<a[1]<<"0"<<"nF";}
if(ost==5)
{
if(a[0]=='0')cout<<a[1]<<"00"<<"nF";else if(a[1]=='0')cout<<a[0]<<"uF";else cout<<a[0]<<","<<a[1]<<"uF";
}
if(ost==6){if(a[0]!='0'){cout<<a[0];}cout<<a[1]<<"uF";}
if(ost==7){if(a[0]!='0'){cout<<a[0];}cout<<a[1]<<"0"<<"uF";}
if(ost==8)
{
if(a[0]=='0')cout<<a[1]<<"00"<<"uF";else if(a[1]=='0')cout<<a[0]<<"mF";else cout<<a[0]<<","<<a[1]<<"mF";
}
if(ost==9){if(a[0]!='0'){cout<<a[0];}cout<<a[1]<<"mF";}
return 0;}