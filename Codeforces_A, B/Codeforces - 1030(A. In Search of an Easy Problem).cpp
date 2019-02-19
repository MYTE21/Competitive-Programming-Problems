/*input
1
0
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	int peopleNum ;
	int problems ;
	bool isEasy = true ;

	cin>>peopleNum ;

	for(int i=0;i<peopleNum;i++)
	{
		cin>>problems ;
		if(problems == 1) isEasy = false ;
	}
	isEasy ? cout<<"EASY"<<endl : cout<<"HARD"<<endl ;

	return 0 ;
}