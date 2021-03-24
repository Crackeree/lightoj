#include<bits/stdc++.h>
using namespace std;





int n,m;
char arr[15][15];
int dx[8] = {1,1,2,2,-1,-1,-2,-2};
int dy[8] = {2,-2,1,-1,2,-2,1,-1};
int ax,ay , bx,by , cx,cy , hx,hy;
int ans[15][15];
bool f = 0;
void bfs(int x , int y)
{
    int vis[15][15];
    memset(vis,-1,sizeof(vis));
    int srcx = x;
    int srcy = y;
    vis[srcx][srcy]=0;
    int K = arr[x][y]-48;
    queue<int > qx,qy;
    qx.push(srcx);
    qy.push(srcy);

    while(!qx.empty() && !qy.empty())
    {
        int ux = qx.front();
        int uy = qy.front();
        qx.pop();
        qy.pop();


    }

    if(f==0)
    {
        f=1;
        for(int i=0)
    }
    else{

    }



}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        for(int j=0;j<n;j++)
        {
            scanf("%s",arr[j]);
        }
    }
    vector<pair<int,int> >knight;
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<m;k++)
        {
            if(arr[j][k]>=49 && arr[j][k]<=57)
            {
                knight.push_back({j,k});
            }
        }
    }

    for(int j=0;j<knight.size();j++)
    {
        bfs(knight[j].frist,knight[j].second);
    }

}
