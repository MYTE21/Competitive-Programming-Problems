#include<iostream>
using namespace std ;

int main()
{
    long long int n, m, ans = 0 ;

	cin>>n ;

	while(n > 9)
	{
		n -= 9 ;
		ans += 9 ;
		ans += n%10 ;
		n /= 10 ;
	}
	cout<<ans+n<<endl ;

	return 0 ;
}
