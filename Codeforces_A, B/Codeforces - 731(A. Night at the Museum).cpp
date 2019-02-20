/*input
ares
*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std ;

int main()
{
	char ch ;
	char from = 'a' ;
	int rotationNum = 0 ;

	while(cin>>ch)
	{
		rotationNum += min(abs(from-ch), 26-abs(from-ch)) ;
		from = ch ;
	}
	cout<<rotationNum<<endl ;
	return 0 ;
}