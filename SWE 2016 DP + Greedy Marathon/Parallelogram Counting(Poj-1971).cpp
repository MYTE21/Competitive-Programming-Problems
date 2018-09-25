#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std ;

#define endl '\n'

vector< pair<int, int> > v ;
vector< pair<int, int> > m ;
pair<int, int> temp ;

int main()
{
	int test_case ;
	int x, y, n ;

	cin>>test_case ;

	for (int t = 1; t<= test_case; t++)
    	{
		cin>>n ;

		m.clear() ;
		v.clear() ;

		int ans = 0 ;
		int top = 0 ;

		for (int i = 0; i < n; i++)
       		{
			cin>>temp.first>>temp.second ;
			v.push_back(temp);
		}

		for (int i = 0; i < v.size(); i++)
        {
			for (int j = i + 1; j < v.size(); j++)
            		{
				x = v[i].first + v[j].first ;
				y = v[i].second + v[j].second ;
				temp.first = x ;
				temp.second = y ;
				m.push_back(temp) ;
			}

		}

		sort(m.begin(), m.end()) ;

		for (int i = 1; i < m.size(); i++)
        	{
			if((m[i].first == m[i-1].first) && (m[i].second == m[i-1].second)) top++ ;
			else
            		{
				ans = ans + (top * (top + 1))/2 ;
				top = 0 ;
			}
		}
		cout<<ans<<endl ;
	}
	return 0 ;
}

