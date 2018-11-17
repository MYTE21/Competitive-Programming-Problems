#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
    int test_case ;
    long long int a, b, k ;
    long long int ans = 0 ;

    cin>>test_case ;

    while(test_case--)
    {
        cin>>a>>b>>k ;
        ans = 0 ;

        if(k%2 == 0)
        {
            ans += (k/2)*(a-b) ;
        }
        else
        {
            ans += (k/2)*(a-b)+a ;
        }
        cout<<ans<<endl ;
    }
    return 0 ;
}
