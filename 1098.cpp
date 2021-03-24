#include<bits/stdc++.h>
using namespace std;
long long fun(long long b,long long a)
{
    long long n = b-a;
    a++;
    if(n%2==0)
        return (n/2)*(2*a + n - 1);
    else return n*((2*a + n - 1)/2);
}
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        long long n;
        scanf("%lld",&n);

        long long ans = 0,con=2;
        vector<long long>vc;
        for(long long j=2; j*j<=n; j++,con++)
        {

            long long temp = n/j;
            vc.push_back(temp);
            temp--;
            ans += temp*j;


        }
        con--;
        vc.push_back(con);

        long long k=1,z=vc.size();
        for(int j=1; j<z; j++)
        {
            long long temp = fun(vc[j-1], vc[j]);
            ans += k*temp;
            k++;
        }


        printf("Case %d: %lld\n",i,ans);

    }
}

