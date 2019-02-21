/*input
6
1 5 7 4 4 3
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	int arr[120] ;
	int n ;
	int sum = 0 ;

	cin>>n ;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i] ;
		sum += arr[i] ;
	}

	int cardForEach = sum/(n/2) ;

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((arr[i]+arr[j]) == cardForEach)
			{
				if(arr[i] != -1 && arr[j] != -1)
				{
					arr[i] = arr[j] = -1 ;
					cout<<i+1<<" "<<j+1<<endl ;
					break ;
				}
			}
		}
	}

	return 0 ;
}