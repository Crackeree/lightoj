#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int sum=0,ans=0;
        while(1)
        {
           sum = sum*10 + k;
           sum%=n;
           ans++;
           if(sum%n==0)break;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
