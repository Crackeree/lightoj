#include<queue>
#include<stdio.h>
#include<iostream>
#include<cstring>
#include<vector>
#define M 1005
using namespace std;

bool b[M+100];
int facto[M+100];
vector<int >vc[M];
bool check[M];

void seive( void )
{
    b[0]=1;

    b[1]=1;
    for(int i=0; i<=M+10; i++)facto[i]=i;

    for(int i = 4 ; i<= M+10 ; i+=2)
    {
        b[i]=1;
        facto[i]=2;
    }

    for(int i = 3 ; i*i <= M+10 ; i += 2)
    {
        if(b[i]==0)
        {
            facto[i]=i;
            for(int j = i*i ; j <= M+10 ; j += 2*i)
            {
                b[j] = 1;
                facto[j]=i;

            }
        }
    }
    for(int i=1; i<1004; i++)
    {

        int ss=i;
        if(ss!=facto[ss])
        {
            memset(check,0,sizeof(check));
//cout<<i<<" "<<"aisi mama aisi...1\n";
            while(ss!=1)
            {
                int r = facto[ss];
                if(!check[r])
                {
                    vc[i].push_back(r);
                    check[r]=1;
                }
                ss/=r;
            }
        }

    }
    //cout<<"aisi mama aisi...2\n";


}
vector<int>dis(M+M,-1);
vector<bool>vis(M+M,0);

void bfs(int src,int dst)
{
    dis[src]=0;
    vis[src]=1;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(u==dst)return;
        if(u==facto[u])continue;
        if(u<dst)
        {


            for(int i=0; i<vc[u].size(); i++)
            {
                int vv = u+vc[u][i];
                if(!vis[vv])
                {
                    dis[vv]=dis[u]+1;
                    vis[vv]=1;
                    q.push(vv);

                }
            }

        }
    }

}
int main()
{
    seive();
    //return 0;

    int t;
    while(1==scanf("%d",&t)){

    int cases=0;
    while(t--)
{
    int s,T;
    scanf("%d %d",&s,&T);
        if(s==T)printf("Case %d: %d\n",++cases,0);
        else if(s==facto[s])printf("Case %d: %d\n",++cases,-1);
        else
        {


            bfs(s,T);
            printf("Case %d: %d\n",++cases,dis[T]);;
            dis.clear();
            dis.assign(M+M,-1);
            vis.clear();
            vis.assign(M+M,0);

        }
    }
    }

    return 0;

}
