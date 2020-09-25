#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;
int main()
{
    string html="",liczbatymcz,html2;
    int tab[1000]={},poczatektabelki,mozna=0,mozna1=0,mozna2=0,mozna3=0,bylem=0,indekstab=-1,iloscwierszy=0,wyswietlilemerror=0,pierwszyraz=1,stalailosc=0;
    while(getline(cin,html2))
    {
        html+=html2;
    }
    for(int i=0;i<html.size();i++)
    {
        if(html[i]=='<'&&html[i+1]=='t'&&html[i+2]=='a'&&html[i+3]=='b'&&html[i+4]=='l'&&html[i+5]=='e')
        {
            poczatektabelki=i+7;
            break;
        }
        /*if(i==html.size())
        {
            getline(cin,html);
            i=-1;
        }*/
    }
    //cout<<html.size();
    for(int i=poczatektabelki;i<html.size();i++)
    {
        if(html[i]=='<'&&html[i+1]=='t'&&html[i+2]=='r')
        {
            mozna=1;
            indekstab=-1;
        }
        if(html[i]=='>'&&mozna==1)
        {
            mozna=0;
            mozna1=1;
        }
        if(html[i]=='<'&&html[i+1]=='t'&&html[i+2]=='d'&&mozna1==1)
        {
            mozna1=0;
            mozna2=1;
            indekstab+=1;
            iloscwierszy+=1;
        }
        if(html[i]=='>'&&mozna2==1)
        {
            mozna2=0;
            mozna3=1;
        }
        for(;isdigit(html[i])&&mozna3==1;i++)
        {
            liczbatymcz+=html[i];
            bylem=1;
        }
        //cout<<liczbatymcz<<endl;
        if(bylem==1)
        {
            mozna3=0;
            bylem=0;
            stringstream sss(liczbatymcz);
            int x;
            sss>>x;
            tab[indekstab]+=x;
            liczbatymcz.clear();
            mozna=1;
        }
        if(html[i]=='<'&&html[i+1]=='/'&&html[i+2]=='t'&&html[i+3]=='r'&&html[i+4]=='>')
        {
            if(pierwszyraz==1)
            {
                stalailosc=iloscwierszy;
                pierwszyraz=0;
            }
            if(stalailosc!=iloscwierszy)
            {
                cout<<"ERROR";
                wyswietlilemerror=1;
                break;
            }
            iloscwierszy=0;
        }
        if(html[i]=='<'&&html[i+1]=='/'&&html[i+2]=='t'&&html[i+3]=='a'&&html[i+4]=='b'&&html[i+5]=='l'&&html[i+6]=='e'&&html[i+7]=='>')
        {
            poczatektabelki=i+7;
            break;
        }
        /*if(i==html.size())
        {
            getline(cin,html);
            i=-1;
        }*/
    }
    if(wyswietlilemerror==0)
    {
        for(int i=0;i<100;i++)
    {
        if(tab[i]==0)
        {
            break;
        }
        cout<<tab[i]<<" ";
    }
    }
    return 0;
}
