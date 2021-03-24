#include<math.h>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int k=0;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int prev=2,count=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            scanf("%d",&temp);
            if(prev!=temp)count+=ceil((double)(temp-prev)/5.0);
            prev = temp;
        }



        printf("Case %d: %d\n",++k,count);

    }
}

