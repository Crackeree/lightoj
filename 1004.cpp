#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long dp[205][105];
long long arr[205][105];
int N;
long long call(int i, int j)
{

if(arr[i][j]==-1 || j<0)return 0;
if(i== 2*N-2 )return arr[i][j];
if(dp[i][j]!=-1)return dp[i][j];

long long value1=0,value2=0;

if(i<N-1)
{
    value1 = arr[i][j] + call(i+1,j);
    value2 = arr[i][j] + call(i+1,j+1);

}
else
{
    value1 = arr[i][j] + call(i+1,j-1);
    value2 = arr[i][j] + call(i+1,j);

}

return dp[i][j] = max(value1,value2);



}
int main()
{
    int t;
    while(1==scanf("%d",&t))
    {
        int cases = 0;
        while(t--)
        {

            scanf("%d",&N);
            memset(dp,-1,sizeof(dp));
            memset(arr,-1,sizeof(arr));
            int i;
            for(i=0; i<N; i++)
            {
                for(int j=0; j<i+1; j++)scanf("%lld",&arr[i][j]);
            }
            for( i=N; i<2*N-1; i++)
            {
                for(int j=0; j<2*N-i-1; j++)scanf("%lld",&arr[i][j]);
            }
            printf("Case %d: %lld\n",++cases,call(0,0));

        }
    }


}
