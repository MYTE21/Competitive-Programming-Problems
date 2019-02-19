/*input
3
1 3
2 2
3 1
*/
#include<iostream>
#include<cstdio>
using namespace std ;

#define Max 100002

int main()
{
	int num ;
	int amountOfMeat[Max] ;
	int costOfMeat[Max] ;
	int minCost = Max ;
	long long int totalCost = 0 ;

	cin>>num ;

	for(int i=0;i<num;i++)
	{
		cin>>amountOfMeat[i]>>costOfMeat[i] ;
		if(costOfMeat[i] < minCost) minCost = costOfMeat[i] ;
		totalCost += (amountOfMeat[i] * minCost) ;
	}

	cout<<totalCost<<endl ;

	return 0 ;
}