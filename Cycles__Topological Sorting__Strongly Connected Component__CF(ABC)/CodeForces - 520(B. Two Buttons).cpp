/*input
10 1
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	int shownNumber, wantedNumber ;
	int minStep = 0 ;

	cin>> shownNumber >> wantedNumber ;

	while(shownNumber<wantedNumber)
	{
		if(wantedNumber%2 == 0)
		{
			wantedNumber /= 2 ;
		}
		else
		{
			wantedNumber++ ;
		}
		minStep++ ;
	}
	cout<< minStep + shownNumber - wantedNumber <<endl ;

	return 0 ;
}