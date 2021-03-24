#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[25][25];
int sum=0;
void call(int x,int y)
{
    if(x<0 || y<0 || x>=m || y>=n)return;
    if(arr[x][y]==0)return;
    else
    {
        arr[x][y]=0;
        sum++;
    }
    call(x,y+1);
    call(x,y-1);
    call(x+1,y);
    call(x-1,y);
    return;
}
int main()
{
    int t;
    scanf("%d",&t);
    int cases=0;
    while(t--)
    {

        scanf("%d %d",&n,&m);

        memset(arr,0,sizeof(arr));
        sum=0;
        int srcx=0,srcy=0;
        char c;
        for(int i=0;i<m;i++)
        {
            getchar();
            for(int j=0;j<n;j++)
            {
                scanf("%c",&c);
                if(c=='@')
                {
                    srcx=i;
                    srcy=j;
                    arr[i][j]=1;
                }
                else if(c=='#')
                {
                    arr[i][j]=0;
                }
                else arr[i][j]=1;


            }

        }



        call(srcx,srcy);
        printf("Case %d: %d\n",++cases,sum);


    }
}
