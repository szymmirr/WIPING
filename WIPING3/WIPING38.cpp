#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int h,m,s;
    float wskgodz,wskgodz2,wskgodz3,wsksek,kat1,kat2,stopnie,minuty,sekundy,katwynikowy;
    cin>>h>>m>>s;
    if(h==12)h=0;
    if(h==13)h=1;
    if(h==14)h=2;
    if(h==15)h=3;
    if(h==16)h=4;
    if(h==17)h=5;
    if(h==18)h=6;
    if(h==19)h=7;
    if(h==20)h=8;
    if(h==21)h=9;
    if(h==22)h=10;
    if(h==23)h=11;
    //wskgodz2=30*h+0.5*m;
    if(s==0);
    //wskgodz3=(30*h)+(0.5/(double)60)*s;
    wskgodz=(30*h)+(0.5*m)+((1/(float)120)*s);
    wsksek=6*s;
    kat1=wsksek-wskgodz;
    kat2=wskgodz-wsksek;
    //cout<<wskgodz<<endl<<wsksek<<endl;
    if(kat1<0)
    {
        kat1=(wsksek-wskgodz)/(-1);
        kat1=360-kat1;
    }
    if(kat2<0)
    {
        kat2=(wskgodz-wsksek)/(-1);
        kat1=360-kat2;
    }
    /*float difference = (float) kat1 - kat2;
    float tolerableDifference = 0.000001;
    if ((-tolerableDifference <= difference) && (difference <= tolerableDifference))
    {
        katwynikowy=kat1;
    }*/
    if(kat1<=kat2)
    {
        //cout<<kat1;
        katwynikowy=kat1;
    }
    else
    {
        //cout<<kat2;
        katwynikowy=kat2;
    }
    //cin>>katwynikowy;
    stopnie = int(katwynikowy);
    minuty = (katwynikowy - stopnie) * 60;
    sekundy = (minuty - int(minuty)) * 60;
    cout<<stopnie<<"^"<<int(minuty)<<"'"<<std::fixed<<std::setprecision(1)<<sekundy<<"\"";
    return 0;
}
