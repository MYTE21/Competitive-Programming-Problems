/*input
2 1 1 1
*/
#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
	int n1, n2, k1, k2 ;

	cin>>n1>>n2>>k1>>k2 ;

	n1>n2 ? cout<<"First"<<endl : cout<<"Second"<<endl ;

	return 0 ;
}