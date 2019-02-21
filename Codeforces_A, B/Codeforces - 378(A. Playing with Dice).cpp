/*input
2 5
*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std ;

int main()
{
	int a, b ;
	int aWin = 0, bWin = 0, draw = 0 ;

	cin>> a >> b ;

	for(int i=1;i<=6;i++)
	{
		if(abs(a-i) < abs(b-i)) aWin++ ;
		else if(abs(a-i) > abs(b-i)) bWin++ ;
		else draw++ ;
	}

	cout<<aWin<<" "<<draw<<" "<<bWin<<endl ;

	return 0 ;
}