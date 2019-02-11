/*input
12
toosmallword
*/
#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std ;

#define Max 110

int main()
{
	int n ;
	char ch ;
	int chack[26] = {0} ;

	cin>>n ;

	for(int i=0;i<n;i++)
	{
		cin>>ch ;
		ch = tolower(ch) ;
		chack[ch-'a'] = 1 ;
	}

	for(int i=0;i<26;i++)
	{
		if(chack[i] != 1) 
		{
			cout<<"NO"<<endl ;
			return 0 ;
		}
	}
	cout<<"YES"<<endl ;

	return 0 ;
}