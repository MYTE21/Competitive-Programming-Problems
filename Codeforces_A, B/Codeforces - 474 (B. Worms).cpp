/*input
5
2 7 3 4 9
3
1 25 11
*/
#include<iostream>
#include<cstdio>
using namespace std ;

#define Max 100002

int BinarySearch(int value , int arr[], int array_size)
{
    int low = 1 ;
    int high = array_size ;
    bool flag = false ;
    int mid ;

    while(low <= high)
    {
        mid = (low+high)/2 ;

        if(value < arr[mid])
        {
            high = mid - 1 ;
        }
        else if(value > arr[mid])
        {
            low = mid + 1 ;
        }
        if(value <=arr[mid] && value > arr[mid-1])
        {
            break ;
        }
    }

    return mid ;
}

int main()
{
	int pileNum ;
	int piles ;
	int pileArray[Max] ;
	int wormNum ;
	int worms ;

	cin>>pileNum ;
	pileArray[0] = 0 ;

	for(int i=1;i<=pileNum;i++)
	{
		cin>>piles ;
		pileArray[i] = pileArray[i-1]+piles ;
	}

	cin>>wormNum ;

	for(int j=0;j<wormNum;j++)
	{
		cin>>worms ;

		/*for(int i=1;i<=pileNum;i++)
		{
			if(worms <= pileArray[i])
			{
				cout<<i<<endl ;
				break ;
			}
		}*/

		int ans = BinarySearch(worms, pileArray, pileNum) ;

		cout<<ans<<endl ;
	}

	return 0 ;
}
