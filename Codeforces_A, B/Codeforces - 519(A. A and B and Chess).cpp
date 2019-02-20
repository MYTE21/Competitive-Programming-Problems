/*input
rppppppr
...k....
........
........
........
........
K...Q...
........
*/
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
using namespace std ;

int main()
{
	char boardPoint ;
	int whiteScore = 0 ;
	int blackScore = 0 ;
	char board[] = {'q', 'r', 'b', 'n', 'p', 'k'} ;
	int point[] = {9, 5, 3, 3, 1, 0} ;

	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cin>>boardPoint ;

			for(int index=0;index<6;index++)
			{
				if(isupper(boardPoint))
				{
					int ch = tolower(boardPoint) ;
					if(ch == board[index])
					{
						whiteScore += point[index] ;
						break ;
					}
				}
				else
				{
					if(boardPoint == board[index])
					{
						blackScore += point[index] ;
						break ;
					}
				}	
			}
		}
	}

	if(whiteScore > blackScore) cout<<"White"<<endl ;
	else if(whiteScore < blackScore) cout<<"Black"<<endl ;
	else cout<<"Draw"<<endl ; 
	 
	return 0 ;
}