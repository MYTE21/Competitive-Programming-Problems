/*input
4 3
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std ;

int main()
{
	int a, b ;
	int commonDivision = 1 ;

	cin>>a>>b ;

	int minNum = min(a,b) ;

	for(int i=1;i<=minNum;i++)
	{
		commonDivision *= i ;
	}
	cout<<commonDivision<<endl ;
}