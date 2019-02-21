/*input
10
10 2 8 1 2 4 1 20 4 5
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std ;

#define Max 130

int main()
{
	int divisorNumber ;
	int divisor[Max] ;
	int aNum, bNum ;

	cin>>divisorNumber ;

	for(int i=0;i<divisorNumber;i++)
	{
		cin>>divisor[i] ;
	}

	sort(divisor, divisor+divisorNumber) ;

	aNum = divisor[divisorNumber-1] ;

	for(int i=0;i<divisorNumber;i++)
	{
		if((aNum%divisor[i] == 0) && (divisor[i] != divisor[i+1]))
		{
			divisor[i] = 0 ;
		}
	}
	divisor[divisorNumber-1] = 0 ;

	sort(divisor, divisor+divisorNumber) ;

	bNum = divisor[divisorNumber-1] ;

	cout<<aNum<<" "<<bNum<<endl ;

	return 0 ;
}