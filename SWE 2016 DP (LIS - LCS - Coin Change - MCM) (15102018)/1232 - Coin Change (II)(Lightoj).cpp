#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std ;

#define Max 110
int mod = 1e8 + 7 ;

long long int findCoinNumb(int coins[], int numOfCoins, int money, int counter)
{
    int values[money+1] ;
    memset(values, 0, sizeof(values)) ;
    values[0] = 1 ;
    int i = 0, j = 0 ;

    for(i=0;i<numOfCoins;i++)
    {
        for(j=1;j<=money;j++)
        {
            if(coins[i]<=j)
            {
                 values[j] += values[j - coins[i]]%mod ;
                 values[j] = values[j]%mod ;
            }
        }
    }
    return values[money] ;
}

int main()
{
    int test_case ;
    int coins[Max] ;
    int money ;
    int counter ;
    int numOfCoins ;

    cin>>test_case ;

    for(int t=1;t<=test_case;t++)
    {
        cin>>numOfCoins ;
        cin>>money ;
        counter = money ;

        for(int i=0;i<numOfCoins;i++)
        {
            cin>>coins[i] ;
        }
        long long int ans = findCoinNumb(coins, numOfCoins, money, counter) ;
        cout<<"Case "<<t<<": "<<ans<<endl ;
    }
    return 0 ;
}
