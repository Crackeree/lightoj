#include<bits/stdc++.h>
using namespace std;
int f[1000009];
int main()
{

    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,ans=0;
        scanf("%d",&n);
        memset(f,0,sizeof(f));
        for(int j=0; j<n; j++)
        {
            int temp;
            scanf("%d",&temp);
            f[temp]++;
            if(f[temp]== temp+1)
            {
                ans+=(temp+1);
                f[temp]=0;


            }


        }

        for(int j=0;j<1000001;j++)
        {
            if(f[j]!=0)ans+=(j+1);
        }


        printf("Case %d: %d\n",i,ans);

    }
    return 0;
}

