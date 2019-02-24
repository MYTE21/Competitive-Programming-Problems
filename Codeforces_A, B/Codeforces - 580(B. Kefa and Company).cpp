/*input
4 5
75 5
0 100
150 20
75 1
*/
#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<cmath>
#include<algorithm>
using namespace std ;

int main()
{
	vector< pair<int, int> > friends ;
	long long friendNum, atLeastMoney ;
	long long money, friendship ;
	long long  total = 0 ;
	long long ans = 0 ;

	cin>> friendNum >> atLeastMoney ;

	for(int i=0;i<friendNum;i++)
	{
		cin>> money >> friendship ;
		friends.push_back(make_pair(money, friendship)) ;
	}

	sort(friends.begin(), friends.end()) ;
	int j = 0 ;

	for(int i=0;i<friendNum;i++)
	{
		total += friends[i].second ;

		while(friends[i].first-friends[j].first >= atLeastMoney)
		{
			total -= friends[j].second ;
			j++ ;
		}
		ans = max(ans, total) ;
	}
	cout<<ans<<endl ;

	return 0 ;
}