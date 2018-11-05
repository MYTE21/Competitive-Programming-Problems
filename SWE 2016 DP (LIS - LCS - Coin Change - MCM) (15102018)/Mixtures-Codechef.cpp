#include<iostream>
#include<cstdio>
using namespace std ;

#define Max 110
#define INT_MAX 1e7+2

int arr[Max][Max] ;
long long int dp[Max][Max] ;

long long int solve(int l, int r)
{
    if(l == r) return dp[l][r] = 0 ;
    if(dp[l][r] != -1) return dp[l][r] ;

    dp[l][r] = INT_MAX ;

    for(int i=l;i<r;i++)
    {
        dp[l][r] = min(dp[l][r], solve(l,i)+solve(i+1,r)+arr[l][i]*arr[i+1][r]) ;
        arr[l][r] = (arr[l][i]+arr[i+1][r])%100 ;
    }
    return dp[l][r] ;
}

int main()
{
    int arr_size ;
    while(cin>>arr_size)
    {
        for(int i=0;i<arr_size;i++)
        {
            cin>>arr[i][i] ;
        }

        for(int i=0;i<arr_size;i++)
        {
            for(int j=0;j<arr_size;j++)
            {
                dp[i][j] = -1 ;
            }
        }
        cout<<solve(0,arr_size-1)<<endl ;
    }
    return 0 ;
}
