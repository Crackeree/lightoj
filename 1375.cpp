#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
#define M 3000000
#define MOD 18446744073709551615
///long long re_arr[M+2];
unsigned long long re_arr[M+2]{0};
unsigned long long arr[M+2];
bool b[M+2];
void Eular(void)
{
    for(int i = 1 ; i<=M ; i++)
    {
        arr[i]=i;
    }
    unsigned long long i , j;
    arr[2]=1;
    for(i=4;i<=M;i+=2)
    {
       arr[i]=arr[i]>>1;
        b[i]=1;
    }

    for(i=3;i<=M;i+=2)
    {
        if(b[i]==0)
        {
            arr[i]-=1;
            for(j=i<<1;j<=M;j+=i)
            {
                arr[j]/=i;
                arr[j]*=(i-1);
                b[j]=1;
            }
        }

    }


    arr[1]=0;


   for(unsigned long long i=2;i<=M; i++){

        unsigned long long temp = i*arr[i];
        for(int j=i;j<=M;j+=i)
    {
        re_arr[j]+=temp;

    }
    }
    re_arr[1]=0;

}
void cumalitive(void)
{
    unsigned long long sum=0;
    for(unsigned long long i=1;i<=M ;i++)
    {
        unsigned long long temp ;
        if(i%2)
        {
            temp=re_arr[i];
            temp/=2;
            temp*=i;
        }
        else
        {
            temp=i;
            temp/=2;
            temp*=re_arr[i];
        }
        temp&=MOD;
        sum+=temp;
        sum&=MOD;
        re_arr[i]=sum;

    }
}

int main()
{

    Eular();
   cumalitive();

///return 0;
    int t;
    while(1==scanf("%d",&t) ){


            int k=0;


    while(t--)
    {
        int n;
        scanf("%d",&n);
        /*double d = sqrtl(n);
        int z =d;
        long long  sum = arr[n]*n;
        for(int i=2;i<z;i++)
        {
            if(n%i==0)
            {
                sum+=arr[i]*i;
                sum+=arr[n/i]*(n/i);

            }

        }
        if(d-z==0)
        {
            sum+=arr[z]*z;
        }
        sum*=n;
        sum=sum>>1;
        sum+=n;
        */
        ///if(2*n>M)if(b[n]==0)re_arr[n]+=n*(n-1);
        printf("Case %d: %llu\n",++k, re_arr[n] );
        ///printf("%lld\n", re_arr[n] );
    }


    }





    return 0;
}

