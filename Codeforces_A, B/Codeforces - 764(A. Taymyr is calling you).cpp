/*input
2 3 9
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	int callMin, comeMin, dayTime ;
	int killNum = 0 ;

	cin>>callMin>>comeMin>>dayTime ;

	for(int i=comeMin;i<=dayTime;i+=comeMin)
	{
		if(i%callMin == 0) killNum++ ;
	}
	cout<<killNum<<endl ;

	return 0 ;
}