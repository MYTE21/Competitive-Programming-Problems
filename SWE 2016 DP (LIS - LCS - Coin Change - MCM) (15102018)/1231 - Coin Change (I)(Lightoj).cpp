#include <iostream>
#include <cstdio>
#include <cstring>
#include<string>
using namespace std;

#define Max 1010
#define hundred 100

int mod = 1e8 + 7 ;
int need ;
int num ;
int amount[hundred];
int counter[hundred];
int dp[hundred][Max];


long long int result(int i, int sum)
{
    long long int ans ;
    ans = 0 ;

    if(sum == need) return 1 ;
    if(i == num) return 0 ;
    if(dp[i][sum] != -1) return dp[i][sum] ;


    for (int j=0;j<=counter[i]&&(j * amount[i])+sum<=need;j++)
    {
        ans += result(i+1, sum+j*amount[i]) ;
        ans = ans%mod ;
    }
    return dp[i][sum] = ans ;
}

int main()
{
    int test_case ;

    cin>>test_case ;

    for (int t=1;t<=test_case;t++)
    {
        cin>>num ;
        cin>>need ;

        for (int i=0;i<num;i++) cin>>amount[i] ;
        for (int i=0;i<num;i++) cin>>counter[i] ;

        memset(dp, -1, sizeof dp);

        cout<<"Case "<<t<<": "<<result(0, 0)<<endl ;
    }
    return 0 ;
}
