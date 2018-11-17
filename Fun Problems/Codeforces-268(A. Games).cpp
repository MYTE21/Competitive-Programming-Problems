#include<iostream>
#include<cstdio>
#include<map>
using namespace std ;

#define Max 102

int home[Max] = {0} ;
int guest[Max] = {0} ;

int main()
{
    int team ;
    int x, y ;
    int ans = 0 ;

    cin>>team ;

    for(int i=0;i<team;i++)
    {
        cin>>x>>y ;
        home[i] = x ;
        guest[i] = y ;
    }

    for(int i=0;i<team;i++)
    {
        for(int j=0;j<team;j++)
        {
            if(home[i] == guest[j]) ans++ ;
        }
    }
    cout<<ans<<endl ;
    return 0 ;
}
