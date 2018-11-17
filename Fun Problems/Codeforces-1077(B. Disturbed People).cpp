#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
    int house_number ;
    int light[103] ;
    int ans = 0 ;

    cin>>house_number ;

    for(int i=0;i<house_number;i++)
    {
        cin>>light[i] ;
    }

    for(int i=1;i<house_number-1;i++)
    {
        if(light[i] == 0)
        {
            if(light[i-1] == 1 && light[i+1] == 1)
            {
                light[i+1] = 0 ;
                ans++ ;
            }
        }
    }
    cout<<ans<<endl ;

    return 0 ;

}
