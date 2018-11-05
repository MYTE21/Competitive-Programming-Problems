#include<iostream>
#include<cstdio>
using namespace std ;

#define Max 100002

int main()
{
    int test_case ;
    cin>>test_case ;

    while(test_case--)
    {
        int arr_size, num , ans = 0 ;
        cin>>arr_size ;
        int arr[Max] = {0} ;

        for(int i=0;i<arr_size;i++)
        {
            cin>>num ;
            arr[num]++ ;
        }

        for(int i=1;i<Max;i++)
        {
            if(arr[i] != 0) ans++ ;
        }
        cout<<ans<<endl ;
    }
    return 0 ;
}
