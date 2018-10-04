#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std ;

int main()
{
   int card_num ;
   string number ;
   int eights = 0, canMake = 0 ;

   cin>>card_num ;
   cin>>number ;

   if(card_num < 11)
   {
       cout<<"0"<<endl ;
   }
   else
   {
       for(int i=0;i<card_num;i++)
       {
           if(number[i] == '8')
           {
               eights++ ;
           }
       }

       canMake = card_num/11 ;

       cout<<min(eights, canMake)<<endl ;
   }
   return 0 ;
}
