#include<math.h>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MOD 1000000007
#define M 46350
bool s[M+2];
int arr[4000];
unsigned long long bigsum(unsigned long long n ,unsigned long long m)
{
    if(m==0) return 1;
    else if(m==1) return (1+n);
    else if(m%2) {
        unsigned long long c=bigsum((n*n)%MOD , m/2);
        c%=MOD;
        return ((c+(n%MOD)*c)%MOD);
    }
    else
    {
        unsigned long long c = bigsum(n,m-1);
        c%=MOD;
        return ((1+(n%MOD)*c)%MOD);
    }
}
void sieve(void)
{
    s[0]=1;
    s[1]=1;
    s[2]=0;
    int i, j,sqrtM = sqrtl(M);
    for(i=4; i<=M; i+=2)s[i]=1;
    for(i=3; i<=sqrtM; i+=2)
    {
        if(s[i]==0)
        {
            for(j=i*i; j<=M; j+=2*i)
            {
                s[j]=1;
            }
        }
    }
    arr[0]=2;
    int pos=1;
    for(i=3;i<=46350;i+=2)
    {
        if(s[i]==0)arr[pos++]=i;
    }
}
int main()
{
    sieve();
    int t;
    while(1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {
            unsigned long long n , m,sum=1;
            scanf("%llu %llu",&n,&m);
            int z = sqrtl(n);

            for(int i=0;arr[i]<=z;i++)
            {
                bool b=0;
                unsigned long long  count=0;
                while(n%arr[i]==0)
                {
                    b=1;
                    n/=arr[i];
                    count++;
                }
                z=sqrtl(n);
                if(b)
                {
                    count*=m;
                  unsigned long long c=bigsum(arr[i],count);
                  c%=MOD;
                  sum*=c;
                  sum%=MOD;
                }
            }
            if(n!=1)
            {

                unsigned long long c=(bigsum(n,m)%MOD);
                c%=MOD;
                sum*=c;
                sum%=MOD;

            }

            printf("Case %d: %llu\n",++k,sum);

        }
    }

}
