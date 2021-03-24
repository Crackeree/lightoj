#include<cstdio>
#include<iostream>
#include<vector>
#define M 10000021
using namespace std;
bool b[M+5];
long long vc[1000000];
int c;

void seive(void)
{
    b[0]=1;
    b[1]=1;
    b[2]=0;
    //for(int i=4; i<=M; i+=2)b[i]=1;
    for(int i=3; i*i<=M; i+=2)
    {
        if(b[i]==0)
        {
            for(int j=i*i; j<=M; j+=2*i)b[j]=1;
        }
    }

    vc[c++]=2;
    for(long long i=3; i<=M; i+=2)if(b[i]==0)vc[c++]=i;
}
int main()
{
    seive();
    //cout<<vc[c-1]<<endl;
    //return 0;
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        long long N,ans=1,j;
        scanf("%lld",&N);

        while(N%2==0)N/=2;
        if(N>1)
        {
            for( j=1 ; vc[j]*vc[j]<=N; j++)
            {
                long long count_=0;
                while(N%vc[j]==0)
                {
                    N/=vc[j];
                    count_++;
                }
                ans*=(count_+1);
            }
        }

        if(N>1)ans*=2;
        ans--;



        printf("Case %d: %lld\n",i,ans);

    }
}
