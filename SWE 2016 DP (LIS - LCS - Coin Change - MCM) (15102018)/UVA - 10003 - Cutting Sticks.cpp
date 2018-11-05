#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std ;

#define Max 55

vector<int> vec ;
int dp[Max][Max] ;

int minCutting(int a, int b)
{
    if((b-a) == 1) return 0 ;
    if(dp[a][b] != -1) return dp[a][b] ;

    int ans = 4000000 ;

    for(int i=a+1;i<b;i++)
    {
        ans = min(ans, vec[b]-vec[a]+minCutting(a,i)+minCutting(i,b)) ;
    }
    dp[a][b] = ans ;
    return ans ;
}

int main()
{
    int length ;
    int point ;
    int p ;

    while(true)
    {
        vec.clear() ;
        memset(dp, -1, sizeof(dp)) ;

        cin>>length ;
        if(length == 0) break ;
        cin>>point ;

        vec.push_back(0) ;
        for(int i=0;i<point;i++)
        {
            cin>>p ;
            vec.push_back(p) ;
        }
        vec.push_back(length) ;

        int ans = minCutting(0, point+1) ;

        cout<<"The minimum cutting is "<<ans<<"."<<endl ;
    }
    return 0 ;
}
