#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std ;

bool compare(pair<int,int>&A, pair<int,int>&B)
{
    return A.first > B.first ;
}

int main()
{
    int arr_ele ;
    int ele ;
    long long int sum = 0 ;
    long long int remain = 0 ;
    int ans = 0 ;
    vector<int> ansArr ;
    vector<pair<int,int>> arr ;

    cin>>arr_ele ;

    for(int i=1;i<=arr_ele;i++)
    {
        cin>>ele ;
        sum += ele ;
        arr.push_back({ele,i}) ;
    }
    sort(arr.begin(), arr.end(), compare) ;

    for(int i=0;i<arr.size();i++)
    {
        remain = 0 ;
        if(i == 0)
        {
            remain = sum - (arr[i].first + arr[i+1].first) ;
            if(remain == arr[i+1].first)
            {
                ans++ ;
                ansArr.push_back(arr[i].second);
            }
        }
        else
        {
            remain = sum - (arr[0].first + arr[i].first) ;
            if(remain == arr[0].first)
            {
                ans++ ;
                ansArr.push_back(arr[i].second);
            }
        }
    }

    cout<<ans<<endl ;
    for(int i=0;i<ansArr.size();i++)
    {
        cout<<ansArr[i]<<" ";
    }
    cout<<endl ;

    return 0 ;
}
