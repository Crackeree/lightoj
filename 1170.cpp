#include<bits/stdc++.h>
#define M 100000007
using namespace std;
long long f[2000009];
map<long long,bool>mp;
vector<long long>vc;

typedef pair<long long, long long> pii;
#define x first
#define y second

pii extendedEuclid(long long a, long long b)
{
    if(b == 0) return pii(1, 0);
    else
    {
        pii d = extendedEuclid(b, a % b);
        return pii(d.y, d.x - d.y * (a / b));
    }
}


int modularInverse(long long a, long long n)
{
    pii ret = extendedEuclid(a, n);
    return ((ret.x % n) + n) % n;
}

long long bs(long long x, bool b)
{

    long long lo = 0, hi = vc.size()-1,mid;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        if(vc[mid]==x)return mid;
        else if(vc[mid]>x)hi=mid-1;
        else lo = mid+1;
    }

    if(b==0)
    {
        while(vc[mid]>x)mid--;

        return mid;

    }
    else
    {
        while(vc[mid]<x)mid++;
        return mid;
    }

}
int main()
{
    long long sum = 1;
    f[0]=1;
    for(long long i=1; i<=2000002; i++)
    {
        sum*=i;
        sum%=M;
        f[i]=sum;
    }
    for(long long i=2; i<=100000; i++)
    {
        long long ans=i;
        for(int j=2; j<=33; j++)
        {
            ans*=i;
            if(mp[ans]==0 && ans<=10000000000)
            {
                vc.push_back(ans);
                mp[ans]=1;
            }
            else break;

        }
    }
    sort(vc.begin(),vc.end());

    //for(int j=0;j<vc.size();j++)cout<<vc[j]<<endl;





    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        long long range = bs(b,0) - bs(a,1) + 1;
        //cout<<bs(b,0)<<" "<<bs(a,1)<<endl;
        if(range!=0)
        {
            long long mi = modularInverse(f[range],M);
            long long r = modularInverse(range+1,M);
            long long ans = ((((((f[2*range]%M)* mi)%M)*mi)%M)*r)%M;
            printf("Case %d: %lld\n",i,ans);
        }
        else
        {
            printf("Case %d: 0\n",i);

        }



    }
}
