#include<stdio.h>
using namespace std;
int main()
{
    int t;
    while(1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {
            int n;
            scanf("%d",&n);
            int arr[n][6];
            for(int i=0; i<n; i++)
            {
                scanf("%d %d %d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3],&arr[i][4],&arr[i][5]);
            }
            int sum=1;
            int min_,max_;
            for(int i=0; i<3; i++)
            {
                min_=100000;
                max_=-100;
                if(sum)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(arr[j][i]>max_)max_=arr[j][i];
                        if(arr[j][i+3]<min_)min_=arr[j][i+3];
                    }
                    if(max_<=min_)
                    {
                        sum*=(min_-max_);
                    }
                    else
                    {
                        sum=0;
                        break;
                    }
                }
            }
            printf("Case %d: %d\n",++k,sum);
        }
    }
}
