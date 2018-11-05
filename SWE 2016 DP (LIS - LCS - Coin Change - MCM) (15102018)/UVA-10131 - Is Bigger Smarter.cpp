#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std ;

#define Max 1010

struct elephant
{
    int index ;
    int Weight, IQ ;

    elephant(){}

    elephant(int index, int Weight, int IQ)
    {
        this->index = index ;
        this->Weight = Weight ;
        this->IQ = IQ ;
    }

    bool operator < (elephant e)const
    {
        if(Weight != e.Weight) return Weight<e.Weight ;
        return IQ>e.IQ ;
    }
};

int main()
{
    int ele_size, ele_iq ;
    vector<elephant> ele;
    int len = 0 ;

    while(cin>>ele_size>>ele_iq)
    {
        ele.push_back(elephant(++len, ele_size, ele_iq));
        //if(len>=9)break ;
    }
    sort(ele.begin(), ele.end()) ;

    int lis[len], next[len] ;
    int ans = 0 ;
    int start ;

    for(int i=len-1;i>=0;i--)
    {
        lis[i] = 1 ;
        next[i] = -1 ;
        for(int j=i+1;j<len;j++)
        {
            if(ele[i].Weight<ele[j].Weight && ele[i].IQ>ele[j].IQ && lis[i]<lis[j]+1)
            {
                lis[i] = lis[j]+1 ;
                next[i] = j ;
            }
        }
        if(lis[i]>ans)
        {
            ans = lis[i] ;
            start = i ;
        }
    }

    cout<<ans<<endl ;
    for(int i=start;i!=-1;i=next[i])
    {
        cout<<ele[i].index<<endl ;
    }
    return 0 ;
}
