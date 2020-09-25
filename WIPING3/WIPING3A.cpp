#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
double t[110],a,p,m,w=0;
int i=0,k=0;
while(cin>>t[i])i+=1;
int s=i-2;
a=t[i-1];
for(int j=s;j>0;j--){
p=pow(a,j);m=p*t[k];w=w+m;k+=1;}
w=w+t[i-2];
cout<<fixed<<setprecision(3)<<w;
return 0;}