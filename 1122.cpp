#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    scanf("%d",&t);
    int cases=0;
    while(t--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        int arr[m];
        for(int i=0;i<m;i++)
        {
            scanf("%d",&arr[i]);
        }
        int c=0;
        for(int i=1;i<m;i++)
        {
            if(arr[i]-arr[i-1]<=2)
            {
                c+=(1<<n);
                c-=2;
            }
        }
        for(int i=2;i<m;i++)
        {
            if(arr[i]-arr[i-2]<=2)
            {
                c+=(1<<n);
                c-=2;
            }
        }
        c+=m;
        printf("Case %d: %d\n",++cases,c);
    }
}
