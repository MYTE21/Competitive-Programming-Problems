/*input
4 5 9 2 1
*/ 
#include<iostream>
#include<cstdio>
using namespace std ;

#define endl '\n'

int main()
{
	int num ;
	int sum = 0 ;

	for(int i=0;i<5;i++)
	{
		cin>>num ;
		sum += num ;
	}

	sum != 0 && sum%5 == 0 ? cout<<sum/5<<endl : cout<<"-1"<<endl ;

	return 0 ;
}