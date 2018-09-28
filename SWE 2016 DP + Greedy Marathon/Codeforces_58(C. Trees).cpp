#include<iostream>
#include<cstdio>
using namespace std ;

#define Max 100002
int arr[Max] ;
int cnt[Max] ;
int Min = 999999 ;

int main()
{
    int tree_num ;
    int ans = Min ;

    cin>>tree_num ;

    for(int i=0;i<tree_num;i++)
    {
        cin>>arr[i] ;
    }

    for(int i=0;i<tree_num/2;i++)
    {
        if((arr[i]-i) > 0)
        {
            cnt[arr[i]-i]++ ;
        }
        if((arr[tree_num-i-1]-i) > 0)
        {
            cnt[arr[tree_num-i-1]-i]++ ;
        }
    }
    if(tree_num%2 != 0)
    {
        if((arr[tree_num/2]-(tree_num/2)) > 0)
        {
            cnt[arr[tree_num/2]-(tree_num/2)]++ ;
        }
    }

    for(int i=0;i<Max;i++)
    {
        ans = min(ans, (tree_num - cnt[i])) ;
    }
    cout<<ans<<endl ;

    return 0 ;
}
