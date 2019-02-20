/*input
1 1 1 1
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std ;

int main()
{
	int two, three, five, six ;
	int sum = 0 ;

	cin>>two>>three>>five>>six ;

	int minFor256 = min(min(two,five),six) ;
	sum += (minFor256*256) ;
	int minFor32 = min(three,(two-minFor256)) ;
	if(minFor32 >0)
	{
		sum += (minFor32*32) ;
	}
	cout<<sum<<endl ;
}