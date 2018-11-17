#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
    int arr_size ;
    int ele ;
    int cnt = 1 ;
    bool flag = true ;

    cin>>arr_size ;
    cin>>ele ;
    cnt += ele ;

    for(int i=2;i<=arr_size;i++)
    {
        cin>>ele ;
        if(cnt < i) flag = false ;
        cnt += (ele-1) ;
    }
    if(cnt != arr_size or !flag) cout<<"NO"<<endl ;
    else cout<<"YES"<<endl ;

    return 0 ;
}
