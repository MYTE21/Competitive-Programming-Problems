/*input
3
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	int num ;
	int maxRepresentationNum ;
	int isEven ;

	cin>>num ;

	maxRepresentationNum = num/2 ;
	isEven = num%2 ;

	cout<<maxRepresentationNum<<endl ;
	if(isEven == 0)
	{
		while(maxRepresentationNum--)
		{
			cout<<"2"<<" ";
		}
		cout<<endl ;
	}
	else
	{
		for(int i=0;i<maxRepresentationNum-1;i++)
		{
			cout<<"2"<<" ";
		}
		cout<<"3"<<endl ;
	}
	return 0 ;
}