/*input
2
2 8
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	int exerciseNum ;
	int exercise ;
	int chest = 0, biceps = 0, back = 0 ;

	cin>>exerciseNum ;

	for(int i=0;i<exerciseNum;i++)
	{
		cin>>exercise ;

		if(i%3 == 0) chest += exercise ;
		else if(i%3 == 1) biceps += exercise ;
		else back += exercise ;
	}

	if((chest>biceps) && (chest > back)) cout<<"chest"<<endl ;
	else if((biceps>chest) && (biceps>back)) cout<<"biceps"<<endl ;
	else cout<<"back"<<endl ;

	return 0 ;
}