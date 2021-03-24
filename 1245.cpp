#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        long long n;
        scanf("%lld",&n);

        long long ans = n, temp = n,cnt=1,j,p=n;
        for(j=2;j*j<=n;j++)
        {
            p = n/j;
            ans+=p;
            temp-=p;
            temp*=cnt;
            ans+=temp;
            temp=p;
            cnt++;

        }
        j--;
        if(j==p);
        else ans+=(p-j)*cnt;
        printf("Case %d: %lld\n",i,ans);
    }
}
