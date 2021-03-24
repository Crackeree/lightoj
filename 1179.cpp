#include<bits/stdc++.h>
using namespace std;
long long n,k;

int call(int N, int K)
{
   if(N==1)return 1;

   return ((call(N-1,K) + K-1)%N + 1);
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%lld %lld",&n,&k);

       printf("Case %d: %d\n",i,call(n,k));




    }
}
