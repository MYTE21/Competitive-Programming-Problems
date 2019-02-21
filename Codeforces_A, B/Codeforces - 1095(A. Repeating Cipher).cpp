/*input
10
ooopppssss
*/
#include<iostream>
#include<cstdio>
using namespace std ;

#define Max 60

int main()
{
	int arrSize ;
	char arr[Max] ;
	int a = 0 ;

	cin>>arrSize ;
	cin>>arr ;

	for(int i=0;i<arrSize;)
	{
		cout<<arr[i] ;
		a++ ;
		i += a ;
	}
	cout<<endl ;
	return 0 ;
}