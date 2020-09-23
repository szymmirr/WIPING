#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    string spc;
    long long int tab1[99999];
    char taboper[99999];
    for(unsigned long long int i=0;i<99999;i++)
    {
        cin>>taboper[i];
        if(taboper[i]==32)
        {
            i--;
        }
        //if(cin.peek()=='\n')
        //{
        //    break;
        //}
        if(taboper!="+"||taboper[i]!=45||taboper[i]!=42||taboper[i]!=47||taboper[i]!=32)
        {
            //tab1[0]=taboper[i];
            break;
        }
    }
    cout << "penkuo, taboper 1= " << taboper[1];
    return 0;
}
