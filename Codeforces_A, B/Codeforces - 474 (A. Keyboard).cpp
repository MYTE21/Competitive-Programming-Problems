/*input
R
s;;upimrrfod;pbr
*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std ;

#define endl '\n'

int main()
{
	char wrongPlace ;
	char letter ;
	string keyBoard = "qwertyuiopasdfghjkl;zxcvbnm,./";

	cin>>wrongPlace ;
	while(cin>>letter)
	{
		cout<<keyBoard[keyBoard.find(letter)-(wrongPlace == 'R')+(wrongPlace == 'L')] ;
	}
	cout<<endl ;
	return 0 ;
}


