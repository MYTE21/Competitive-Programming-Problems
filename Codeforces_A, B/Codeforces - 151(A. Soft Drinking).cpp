/*input
10 1000 1000 25 23 1 50 1
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	int friends, bottles, drinkAmount, limes, sliceNum, saltAmount ;
	int toastDrinkAmount, toastSalt ;
	int canMake ;

	cin>>friends>>bottles>>drinkAmount>>limes>>sliceNum>>saltAmount ;
	cin>>toastDrinkAmount>>toastSalt ;

	canMake = min( min(((bottles*drinkAmount)/toastDrinkAmount),(limes*sliceNum)), 
			  (saltAmount/toastSalt))/friends ;

	cout<<canMake<<endl ;
}