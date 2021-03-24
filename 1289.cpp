#include<iostream>
#include<vector>
#include<math.h>
#include<cstdio>
#include<cstring>
#define M  100000000
#define MOD 4294967295
using namespace std;
int status[(M>>5)+2];
int z;
unsigned int arr[5762900+5];
bool check(int N , int pos){  return (bool) (N & (1<<pos));}
int Set(int N , int pos) { return N = N | (1<<pos);}
void sieve()
{

	 int i, j, sqrtN;
     sqrtN = int( sqrt( M ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= M; j += (i<<1) )
			 {
				 status[j>>5]=Set(status[j>>5],j & 31)   ;
	 		 }
		 }
	 }


}
int prime[5762900+5];
void pre_calculate(void)
{
    int pos=0;
    prime[pos]=2;
    arr[pos++]=2;
    unsigned long long  sum = 2;
    for(unsigned long long i=3;i<=M;i+=2)
    {
        if(0==check(status[i>>5],i&31))
        {
           prime[pos]=i;
           sum*=i;
           sum&=MOD;
           ///cout<<sum<<endl;
           arr[pos]= sum;
           pos++;
        }
    }
    z=pos;

}
int main()
{

    sieve();
    pre_calculate();
    ///return 0;
    int t;
    while(1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {
            unsigned long long  n,sum=1;
            scanf("%llu",&n);
            ///cout<<arr[n]<<endl;

            int sqrtn=sqrtl(n);
            int two = log2l(n);



            unsigned long long t = powl(2,two-1);
            t&=MOD;
            sum*=t;
            sum&=MOD;
            for(int i=1;prime[i]<=sqrtn;i++)
            {
                double d = prime[i];
                int p = log10l(n)/log10l(d) ;


                unsigned long long temp = powl(prime[i],p-1);
                temp&=MOD;
                sum*=temp;
                sum&=MOD;
            }



            int low=0,high=z-1,mid;
            for(;low<=high;)
            {
                mid=(low+high)/2;
                if(prime[mid]>n)high=mid-1 ;
                else if(prime[mid]<n)low=mid+1 ;
                else break;
            }
            if(prime[mid]>n)mid-- ;
            unsigned long long temp = arr[mid];
            ///cout<<temp<<endl;



            ///temp&=MOD;
            sum*=temp;
            sum&=MOD;

            printf("Case %d: %llu\n",++k,sum);




        }
    }


}
