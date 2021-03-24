#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    scanf("%d",&t);
    int cases=0;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        getchar();
        int ans=0;
        printf("Case %d:\n",++cases);
        while(n--)
        {
            char str[100]={0};
            scanf("%s",str);
            if(str[0]=='d')
            {
                int temp;
                scanf("%d",&temp);
                ans+=temp;
            }
            else if(str[0]=='r')
            {
                printf("%d\n",ans);
            }
        }
    }
}
