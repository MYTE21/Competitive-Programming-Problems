#include<iostream>
#include<cstdio>
#include<set>
#include<vector>
#include<map>
using namespace std ;

int main()
{
    int test_case ;
    string university, team ;
    vector<pair<string,string>> vec ;
    map<string,int> Map ;

    cin>>test_case ;

    while(test_case--)
    {
        cin>>university>>team ;

        if(Map[university] == 1) continue ;

        Map[university] = 1 ;
        vec.push_back({university,team}) ;
    }

    for(auto i=0;i<12;i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl ;
    }
    return 0 ;
}
