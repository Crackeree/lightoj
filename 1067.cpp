#include<bits/stdc++.h>
#define M 1000003
using namespace std;
long long arr[1000009];

typedef pair<long long, long long> pii;
#define x first
#define y second



pii extendedEuclid(long long a, long long b)   // returns x, y | ax + by = gcd(a,b)
{
    if(b == 0) return pii(1, 0);
    else
    {
        pii d = extendedEuclid(b, a % b);
        return pii(d.y, d.x - d.y * (a / b));
    }
}
long long modularInverse(long long a, long long n)
{
    pii ret = extendedEuclid(a, n);
    return ((ret.x % n)+n)%n;
}



int main()
{


    long long sum=1;
    for(int i=1;i<= 1000000 ;i++)
    {
       sum*=i;
       sum%=M;
       arr[i]=sum;
    }
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        if(n==k)printf("Case %d: 1\n",i);
        else if(k==0)printf("Case %d: 1\n",i);
        else if(k==1)printf("Case %d: %d\n",i,n);
        else{
            long long temp = 1;
            temp*=arr[n];
            temp*= modularInverse(arr[k],M);
            temp%=M;
            temp *= modularInverse(arr[n-k],M);
            temp%=M;
            printf("Case %d: %lld\n",i,temp);

        }
    }
}
