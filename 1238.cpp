#include<bits/stdc++.h>
using namespace std;
int n,m;
char arr[25][25];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int ax,ay , bx,by , cx,cy , hx,hy;

int bfs(int x , int y)
{
    int vis[25][25];
    memset(vis,-1,sizeof(vis));
    int srcx = x;
    int srcy = y;
    vis[srcx][srcy]=0;
    queue<int > qx,qy;
    qx.push(srcx);
    qy.push(srcy);

    while(!qx.empty() && !qy.empty())
    {
        int ux = qx.front();
        int uy = qy.front();
        qx.pop();
        qy.pop();

        for(int i=0;i<4;i++)
        {
            int vx = ux+dx[i];
            int vy = uy+dy[i];
            if(vis[vx][vy]==-1 && arr[vx][vy]!='#' &&  arr[vx][vy]!='m')
            {
                vis[vx][vy]= vis[ux][uy] + 1;
                qx.push(vx);
                qy.push(vy);
            }

        }
    }

    return max( max(vis[ax][ay] , vis[bx][by]) , vis[cx][cy]);

}

int main()
{

    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
      scanf("%d %d",&n,&m);

      for(int j=0;j<n;j++)
      {
          scanf("%s",arr[j]);
      }

      int ans = 0;


      for(int j=0;j<n;j++)
      {
          for(int k = 0 ; k<m ;k++)
          {
              if(arr[j][k]=='h')
              {
                  hx = j;
                  hy  =k;
              }
              else if(arr[j][k]=='a')
              {
                  ax = j;
                  ay = k;
              }
              else if(arr[j][k]=='b')
              {
                  bx = j;
                  by = k;
              }
              else if(arr[j][k]=='c')
              {
                  cx = j;
                  cy = k;
              }
          }
      }

     printf("Case %d: %d\n",i,bfs(hx,hy));


    }
}
