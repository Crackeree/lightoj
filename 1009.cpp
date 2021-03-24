#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    scanf("%d",&t);

    int cases = 0;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        vector<int>edge[20009];
        int max_=-1;
        for(int i=0; i<n; i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            int temp = max(u,v);
            if(max_<temp)max_=temp;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }

        int colour[20009];
        memset(colour,-1,sizeof(colour));
        int ans=0;
        for(int i=1; i<=max_; i++)
        {
            int w=0,b=0;
            int src = i;
            if(colour[src]!=-1 || edge[src].size()==0)continue;
            colour[src]=0;
            queue<int>qu;
            qu.push(src);

            while(!qu.empty())
            {
                int p = qu.front();
                if(colour[p]==0)w++;
                else if(colour[p]==1)b++;
                qu.pop();

                for(int i = 0; i<edge[p].size(); i++)
                {
                    int q = edge[p][i];
                    if(colour[q]==-1)
                    {
                        qu.push(q);
                        colour[q]=(colour[p]+1)%2;

                    }
                }
            }

            ans+= max(w,b);
        }
        printf("Case %d: %d\n",++cases,ans);


    }
}
