#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int lycznyk=0,styk=0,sumka=0;
    double s1s2;
    double r1pr2;
    double r1mr2;
    double tab[10000][3];
    while(true)
    {
    cin>>tab[lycznyk][0]>>tab[lycznyk][1]>>tab[lycznyk][2];
    lycznyk+=1;
    if(cin.eof())break;
    }

    for (int i=0;i<lycznyk;i++)
    {
        for(int j=i+1;j<lycznyk;j++)
        {
            styk=0;
            s1s2=sqrt((pow((tab[j][0]-tab[i][0]),2)+pow((tab[j][1]-tab[i][1]),2)));
            r1pr2=tab[i][2]+tab[j][2];

            if(tab[i][2]>tab[j][2])
            r1mr2=tab[i][2]-tab[j][2];
            else
            r1mr2=tab[j][2]-tab[i][2];

            if(s1s2==r1pr2)
            {
                sumka+=1;
                styk=1;
            }

            if(styk==0)
            {
                if(s1s2==r1mr2 && (tab[i][0]!=tab[j][0] && tab[i][1]!=tab[j][1] && tab[i][2]!=tab[j][2]))
                {
                    sumka+=1;
                }
            }

            if(r1mr2<s1s2 && s1s2<r1pr2)
            {
                sumka+=2;
            }

            //if(tab[i][0]==tab[j][0] && tab[i][1]==tab[j][1] && tab[i][2]==tab[j][2])
        }
    }
    cout << sumka;
    return 0;
}