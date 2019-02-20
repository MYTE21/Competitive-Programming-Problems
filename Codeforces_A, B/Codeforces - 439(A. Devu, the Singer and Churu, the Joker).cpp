/*input
3 20
2 1 1
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	int songNumber ;
	int totalTimeOfFunction ;
	int songTime ;
	int totalSongTime = 0 ;
	int totalJokes ;
	int totalBreakTime = 0 ;

	cin>> songNumber >> totalTimeOfFunction ;

	totalBreakTime += (10*(songNumber-1)) ;

	for(int i=0;i<songNumber;i++)
	{
		cin>>songTime ;
		totalSongTime += songTime ;
	}

	if((totalBreakTime+totalSongTime) > totalTimeOfFunction)
	{
		cout<<"-1"<<endl; 
	}
	else
	{
		totalBreakTime += (totalTimeOfFunction- totalSongTime - totalBreakTime) ;
		totalJokes = totalBreakTime/5 ;

		cout<<totalJokes<<endl ;	
	}

	return 0 ;
}