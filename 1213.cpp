#include<bits/stdc++.h>
using namespace std;
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

long long bigmod(long long a,long long p, long long m)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        long long z = bigmod(a,p/2,m);
        z%=m;
        return (z*z)%m;
    }
    else{
        long long z = bigmod(a,p-1,m);
        z%=m;
        return (a*z)%m;
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long n,k,Mod;
        scanf("%lld %lld %lld",&n,&k,&Mod);
        long long sum=0;
        for(int j=0;j<n;j++)
        {
            long long temp;
            scanf("%lld",&temp);
            sum+=temp;
        }
        sum%=Mod;
        long long ans = bigmod(n%Mod,k-1,Mod);
        ans%=Mod;

        ans*=sum;
        ans%=Mod;

        ans*= (k%Mod);
        ans%=Mod;
        cout<<ans<<endl;




    }
}
