/*input
2
1 2
2 1
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	bool AlexIsRight = false ;
	int numberOfLaptop ;
	int price ;
	int quality ;

	cin>>numberOfLaptop ;

	while(numberOfLaptop--)
	{
		cin>>price>>quality ;
		if(price != quality) AlexIsRight = true ;
	}

	AlexIsRight ? cout<<"Happy Alex"<<endl : cout<<"Poor Alex"<<endl ;

	return 0 ;
}