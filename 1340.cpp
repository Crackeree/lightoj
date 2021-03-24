#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

#define MOD 10000019
#define M 100000
bool s[M+2];
int arr[6030];
unsigned long long  bigmod(  int b ,  int p)
{
    if(p==0)return 1;
    else if(p%2==0){ unsigned long long  c = bigmod(b,p/2);return(c%MOD*c%MOD)%MOD;}
    else { return b*bigmod(b,p-1);}
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
    for(i=3;i<=M;i+=2)
    {
        if(s[i]==0)arr[pos++]=i;
    }
}
int main()
{
    sieve();
    int test;
    while(1==scanf("%d",&test))
    {
        int k=0;
        while(test--)
        {
            int n , t;
            scanf("%d %d",&n,&t);
            int temp ;
            unsigned long long sum = 1;
            for(int i = 0;arr[i]<=n;i++ )
            {
                temp = n;

                int count = 0;
                while(temp)
                {
                    temp/=arr[i];
                    count+=temp;

                }

                if(count>=t){
                        sum*=bigmod(arr[i],count/t);
                        sum%=MOD;
                }

            }
            if(sum!=1)printf("Case %d: %llu\n",++k,sum);
            else printf("Case %d: -1\n",++k);

        }
    }

}
