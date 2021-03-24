#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool arr[M+10];
void seive(void)
{
    arr[0]=1;
    arr[1]=1;
    int i , j;
    for(i=4;i<=M;i+=2)arr[i]=1;
    int z = sqrtl(M);
    for(i=3;i<=z;i+=2)
    {
        if(arr[i]==0)
        {
            for(j=i*i;j<=M;j+=2*i)
            {
                arr[j]=1;
            }
        }
    }
}
int divisors(long long n)
{
    int i,ans=1;
    for( i=2;i<=M;i++)
    {
        if(arr[i]==0)
        {
            if(i*i*i>n)break;
            int count = 1;
            while(n%i==0)
            {
                n/=i;
                count++;
            }
            ans*=count;

        }

    }
    double d = sqrtl(n);
    int dd = d;
    bool b = 1;
    if(d-dd!=0)b=0;
    bool bprime = 1;
    if(n>1000000)
    for(;i<=dd;i+=2)
    {
        if(arr[i]==0)
        {
            if(n%i==0){bprime=0;break;}
        }


    }
    if(n>1000000 && bprime)ans*=2;
    else if(n<1000000 && arr[n]==0)ans*=2;
    else if(b && arr[dd]==0)ans*=3;
    else if(n!=1)ans*=4;
    return ans-1;
}
int main()
{
    seive();

    int t;
    while(1==scanf("%d",&t))
    {
        int k =0;
        while(t--)
        {
            long long temp;
            scanf("%lld",&temp);
            printf("Case %d: %d\n",++k,divisors(temp));
        }
    }

}

