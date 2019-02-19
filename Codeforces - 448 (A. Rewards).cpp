/*input
1 0 0
1 0 0
1
*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
using namespace std ;

int main()
{
	int cup ;
	int totalCup = 0 ;
	int medal ;
	int totalMedal = 0 ;
	int shelfNumber ;
	int neededShelf = 0 ;

	for(int i=0;i<3;i++)
	{
		cin>>cup ;
		totalCup += cup ;
	}
	for(int i=0;i<3;i++)
	{
		cin>>medal ;
		totalMedal += medal ;
	}
	cin>>shelfNumber ;

	neededShelf = ceil((double)totalCup/5) + ceil((double)totalMedal/10) ;

	neededShelf <= shelfNumber ? cout<<"YES"<<endl : cout<<"NO"<<endl ;

	return 0 ;

}