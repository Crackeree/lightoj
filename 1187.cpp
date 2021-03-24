#include<bits/stdc++.h>
using namespace std;
int main()

{


  ///freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        int input[n+2];
        for(int j=1; j<=n; j++)
        {

            scanf("%d",&input[j]);
        }


        int max_ = 1;
        for(int j=2;j<=n;j++)
        {
            if(j-input[j]<=max_)max_++;
        }
        printf("Case %d: %d\n",i,max_);
    }
}
