#include<bits/stdc++.h>
using namespace std;
int N,R;
int s,e;
vector<int>edge[105];
int vis[105];
void bfs(int src)
{
    memset(vis,-1,sizeof(vis));
    queue<int>q;
    q.push(src);
    vis[src]=0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0;i<edge[u].size();i++)
        {
            int v  =edge[u][i];
            if(vis[v]==-1)
            {
                vis[v] = vis[u] + 1;
                q.push(v);
            }
        }
    }





}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1 ; i<=t;i++)
    {

        scanf("%d",&N);
        scanf("%d",&R);

        for(int j=0;j<R;j++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);

        }


        scanf("%d %d",&s,&e);
        bfs(s);
        int source_dist[105];
        for(int j=0;j<105;j++)source_dist[j]=vis[j];
        bfs(e);
        int max_ = -11;

        for(int j=0;j<N;j++)
        {
            int temp = source_dist[j] + vis[j];
            max_=max(max_,temp);
        }

        for(int j=0;j<N;j++)edge[j].clear();

        printf("Case %d: %d\n",i,max_);

    }
}
