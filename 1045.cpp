#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>
#define pi 2*acos(0.0)
using namespace std ;

int base ;
double sum2=0;
double f ;
double ara[1000000];
void pre()
{
    int i=1 ,j =0;;
    for( ;i<=1000000;i++)
    {
        sum2=sum2+log10(i);
        ara[j++]=sum2;



    }

}

int main()
{
    pre();
   int t,n,b,i,z;
   while(1==scanf("%d",&t))
   {
       int i=0;
      while(t--)
         {
             scanf("%d %d",&n,&b);
             base=b;
             f= log10( base );
             if(n==0)z=0;
             else z=ara[n-1]/f;
             printf("Case %d: %d\n",++i,++z);


         }
   }
   return 0;
}
