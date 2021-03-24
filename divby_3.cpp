
#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t,i=0,a,b ;

    unsigned long long  sum1 , sum2 , z;
    while(1==scanf("%d",&t))
    {
        while(t--)
        {
            scanf("%d %d",&a,&b);
            sum1=a*(a+1);
            sum2=b*(b+1);
            z= sum2/6 - sum1/6 ;
            printf("Case %d: %llu\n",++i,z);

        }
    }
}
