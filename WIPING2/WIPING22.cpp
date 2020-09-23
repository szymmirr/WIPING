#include <iostream>

using namespace std;

int main()
{
    string s;
    char litera;
    unsigned int n;
    int w,k,d,licz,liczzera;
    cin>>n;
    licz=0;
    char tab[101][101]={};
    for(unsigned int i=0;cin>>w>>k>>d>>s;i++)
    {
        /*cin>>w;
        cin>>k;
        cin>>d;
        cin>>s;*/
        if(d==2)
        {
            if(k+s.size()>n+1){cout<<licz;return 0;}
            else
            {
                for(unsigned int j=0;j<s.size();j++)
                {
                if(tab[w][k+j]!=0)
                {
                    litera=s[j];
                    if(tab[w][k+j]!=litera)
                    {
                        cout<<licz;
                        return 0;
                    }
                }
                else
                {
                    litera=s[j];
                    tab[w][k+j]=litera;
                }

                }
                licz=licz+1;




                         /////////////////////////////
                        /* liczzera=0;
                for (int i=1;i<n+1;i++)
        {
            for (int j=1;j<n+1;j++)
            {
                if(tab[i][j]==0)
                {
                    liczzera=1;
                }
            }
        }
       //////////////////////////
if(liczzera==0)
{
    cout << licz;
    return 0;
}
*/


            }
        }




        if(d==1)
        {
            if(w+s.size()>n+1){cout<<licz;return 0;}
            else
            {
                for(unsigned int j=0;j<s.size();j++)
                {
                if(tab[w+j][k]!=0)
                {
                    litera=s[j];
                    if(tab[w+j][k]!=litera)
                    {
                        cout<<licz;
                        return 0;
                    }
                }
                else
                {
                    litera=s[j];
                    tab[w+j][k]=litera;
                }

                }
                licz=licz+1;


                          /////////////////////////////
                        /* liczzera=0;
                for (int i=1;i<n+1;i++)
        {
            for (int j=1;j<n+1;j++)
            {
                if(tab[i][j]==0)
                {
                    liczzera=1;
                }
            }
        }
       //////////////////////////
if(liczzera==0)
{
    cout << licz;
    return 0;
}

*/


            }
        }

    }
    cout<<licz;
    return 0;
}
