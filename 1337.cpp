#include<bits/stdc++.h>
using namespace std;
/*
void call(int x,int y)
{
    if(x<0 || y<0 || x>=M || y>=N)return;
    if(mp[x][y]==1)return;
    mp[x][y]=1;
    if(arr[x][y]=='#')return;
    if(arr[x][y]=='C')
    {
        count_++;


    }
    call(x+1,y);
    call(x,y+1);
    call(x-1,y);
    call(x,y-1);
    return;
}
*/
int main()
{
    int t;
    scanf("%d",&t);
    int cases=0;
    while(t--)
    {
        int M,N,Q;
        scanf("%d %d %d",&M,&N,&Q);
        getchar();
        char arr[M+5][N+5];
        for(int i=0; i<M; i++)
        {
            scanf("%s",arr[i]);
        }

        //for(int i=0;i<M;i++)cout<<arr[i]<<endl;
        //return 0;
        int mp[505][505]= {0};
        int ans[1005];


        printf("Case %d:\n",++cases);
        int k = 1;
        while(Q--)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            int count_=0;
            bool vis[505][505]= {0};

            x--;
            y--;
            if(mp[x][y])
            {
                printf("%d\n",ans[mp[x][y]]);
                continue;
            }
            vis[x][y]=1;
            queue<int>qx,qy;
            qx.push(x);
            qy.push(y);
            int dx[4]= {1,0,-1,0};
            int dy[4]= {0,1,0,-1};

            while(!qx.empty() && !qy.empty())
            {
                int ux = qx.front();
                int uy = qy.front();
                if(arr[ux][uy]=='C')count_++;
                qx.pop();
                qy.pop();

                for(int i=0; i<4; i++)
                {
                    int vx = ux+dx[i];
                    int vy = uy+dy[i];

                    if(vx<0 || vy<0 || vx>=M || vy>=N )continue;
                    // cout<<vx<<" "<<vy<<endl;
                    if(vis[vx][vy]==1)continue;
                    if(arr[vx][vy]=='#')
                    {
                        vis[vx][vy]=1;
                        continue;
                    }
                    //cout<<vis[vx][vy]<<endl;
                    if(vis[vx][vy] == 0)
                    {

                        qx.push(vx);
                        qy.push(vy);
                        vis[vx][vy]=1;
                        if(mp[vx][vy]==0)mp[vx][vy]=k;

                    }
                }
            }
            printf("%d\n",count_);
            ans[k]=count_;
            k++;
        }
    }

    return 0;
}
