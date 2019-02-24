/*input
77
*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std ;

int main()
{
	string num ;
	int index = 0 ;

	cin>>num ;

	int len = num.size() ;

	for(int i=0;i<len;i++)
	{
		if(num[i] == '4') index = index*2+1 ;
		if(num[i] == '7') index = index*2+2 ;
	}
	cout<<index<<endl ;
	return 0 ;
}