#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std ;

#define Max 5010

int LCS(char a[], char b[], int alength, int blength)
{
    int matix[alength+1][blength+1] ;

    for(int i=0;i<=alength;i++)
    {
        for(int j=0;j<=blength;j++)
        {
            if(i == 0 || j == 0)
            {
                matix[i][j] = 0 ;
            }
            else if(a[i-1] == b[j-1])
            {
                matix[i][j] = matix[i-1][j-1] + 1 ;
            }
            else
            {
                matix[i][j] = max(matix[i][j-1], matix[i-1][j]) ;
            }
        }
    }
    return matix[alength][blength] ;
}

int main()
{
    char first_str[Max] ;
    char second_str[Max] ;
    int n ;

    cin>>n ;
    cin>>first_str ;

    strcpy(second_str, first_str) ;
    reverse(second_str, second_str+n) ;

    int ans = n-LCS(first_str, second_str, n, n) ;
    cout<<ans<<endl ;
    return 0 ;
}
