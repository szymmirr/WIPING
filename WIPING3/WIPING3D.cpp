// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n,dzien1,mies1,rok1,dzien2,mies2,rok2,wynik=0;
	int dniwmies,a=6,tempdzien1,tempmies1,temprok1;
	cin>>dzien1>>mies1>>rok1>>dzien2>>mies2>>rok2;
	mies1/=-1;
	rok1/=-1;
	mies2/=-1;
	rok2/=-1;
	//cout<<dzien1<<" "<<mies1<<" "<<rok1<<" "<<dzien2<<" "<<mies2<<" "<<rok2;
	
	//19-04-2013 13-05-2013
	//28-02-2015 14-04-2015
	//15-07-1410 02-09-1945
	//19-04-2014 26-02-2011
	
	if(rok2>=rok1)
	{
			for(int i=dzien1;a==6;i++)
			{
				if(mies1==1)dniwmies=31;if(mies1==2&&rok1%4!=0)dniwmies=28;if(mies1==2&&rok1%4==0)dniwmies=29;if(mies1==3)dniwmies=31;
				if(mies1==4)dniwmies=30;if(mies1==5)dniwmies=31;if(mies1==6)dniwmies=30;
				if(mies1==7)dniwmies=31;if(mies1==8)dniwmies=31;if(mies1==9)dniwmies=30;
				if(mies1==10)dniwmies=31;if(mies1==11)dniwmies=30;if(mies1==12)dniwmies=31;
				wynik+=1;
				
				if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
				if(dzien1==dniwmies)
				{
					dzien1=0;
					if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
					mies1+=1;
					if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
					if(mies1>12)
					{
						mies1=1;
						if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
						rok1+=1;
						{
							if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
						}
					}
				}
				dzien1+=1;
			}
	}
	if(rok2<rok1)
	{
		tempdzien1=dzien1;
		tempmies1=mies1;
		temprok1=rok1;
		dzien1=dzien2;
		mies1=mies2;
		rok1=rok2;
		dzien2=tempdzien1;
		mies2=tempmies1;
		rok2=temprok1;
			for(int i=dzien1;a==6;i++)
			{
				if(mies1==1)dniwmies=31;if(mies1==2&&rok1%4!=0)dniwmies=28;if(mies1==2&&rok1%4==0)dniwmies=29;if(mies1==3)dniwmies=31;
				if(mies1==4)dniwmies=30;if(mies1==5)dniwmies=31;if(mies1==6)dniwmies=30;
				if(mies1==7)dniwmies=31;if(mies1==8)dniwmies=31;if(mies1==9)dniwmies=30;
				if(mies1==10)dniwmies=31;if(mies1==11)dniwmies=30;if(mies1==12)dniwmies=31;
				wynik+=1;
				
				if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
				if(dzien1==dniwmies)
				{
					dzien1=0;
					if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
					mies1+=1;
					if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
					if(mies1>12)
					{
						mies1=1;
						if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
						rok1+=1;
						{
							if(dzien1==dzien2&&mies1==mies2&&rok1==rok2)break;
						}
					}
				}
				dzien1+=1;
			}
	}
			cout<<wynik-1;
	cin>>n;
	return 0;
}

