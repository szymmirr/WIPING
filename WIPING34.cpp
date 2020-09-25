#include <iostream>
using namespace std;
int main()
{
    string str1,str2,tabznak;
    //tabznak[0]='v';
    str1="v";
    str2="x";
    cin >> str1 >> str2;
    /*for(int i=0;i<100;i++)
    {
        tabznak[i]='v';
    }*/
    int found=0,zwiekszacz=0;

    for (int i=0;i<str2.length();i++)
    {
        found=0;
        for(int j=0;j<str1.length();j++)
        {
            if(str1[j]==str2[i])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            for(int k=0;k<zwiekszacz+1;k++)
            {
                /*if(tabznak[k]=='0')
                {
                    break;
                }*/
                if(str2[i]==tabznak[k])
                {
                    found=1;
                    break;
                }
            }
            if(found==0)
            {
                tabznak[zwiekszacz]=str2[i];
                zwiekszacz+=1;
            }
        }

    }
    cout<<zwiekszacz;
    return 0;
}
