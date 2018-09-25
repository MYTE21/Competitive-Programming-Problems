#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std ;

#define Max 2010
int arr[Max];

bool canBuild[Max+2] ;

int CoinChangeFun(int ele_num, int target)
{
    for(int i=0;i<ele_num;i++)
    {
        if(target%arr[i] == 0)
        {
            return target ;
        }
    }

    canBuild[0] = true ;

    for(int i=0;i<ele_num;i++)
    {
        for(int j=0;j+arr[i]<=target;j++)
        {
            if(canBuild[j])
            {
                canBuild[j+arr[i]] = true ;
            }
        }
        if(canBuild[target])
        {
            return target ;
        }
    }

    for(int i=target;i>=0;i--)
    {
        if(canBuild[i])
        {
            return i ;
        }
    }
    return 0 ;
}

int main()
{
    int test_case ;
    int ele_num ;
    int target ;

    cin>>test_case ;

    while(test_case--)
    {
        int cnt = 0 ;
        memset(arr,0,sizeof arr) ;
        memset(canBuild, false, sizeof canBuild) ;

        cin>>ele_num>>target ;

        for(int i=0;i<ele_num;i++)
        {
            cin>>arr[i] ;
        }

        cout<<CoinChangeFun( ele_num, target)<<endl ;

    }
    return 0 ;
}

