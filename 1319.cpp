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


int main()
{

    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {



        int n;
        scanf("%d",&n);

        long long arr_p[n], arr_r[n];
        long long N=1;
        for(int j=0; j<n; j++)
        {
            scanf("%lld %lld",&arr_p[j],&arr_r[j]);
            N *= arr_p[j];
        }
        long long ans=0;
        for(int j=0; j<n; j++)
        {
            long long temp = N/arr_p[j];
            temp *= modularInverse(temp,arr_p[j]);
            temp *= arr_r[j];
            ans+=temp;


        }
        ans%=N;
        bool f=0;
        for(int j=0;j<n;j++)
        {
            if(ans%arr_p[j]==arr_r[j]);
            else
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            printf("Case %d: Impossible\n",i);

        }
        else{
            printf("Case %d: %lld\n",i,ans);
        }



    }
}
