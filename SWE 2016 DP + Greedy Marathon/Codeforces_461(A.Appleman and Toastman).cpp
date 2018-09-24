#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std ;

#define endl '\n'
#define Max 300002

int main()
{
    int n ;
    int arr[Max] ;
    long long int ans = 0 ;
    long long int tmp = 0 ;

    cin>>n ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i] ;
        ans += arr[i] ;
    }

    sort(arr,arr+n,greater<int>());

    tmp = arr[0] ;

    for(int i=1;i<n;i++)
    {
        tmp += arr[i] ;
        ans += tmp ;
    }

    cout<<ans<<endl ;
    return 0 ;
}
