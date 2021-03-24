#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    scanf("%d",&t);
    int cases=0;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        vector<pair<int,int> >v_dir[105];
        vector<pair<int,int> >v_indir[105];
        for(int i=0; i<n; i++)
        {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            v_dir[a].push_back(make_pair(b,c));
            v_indir[a].push_back(make_pair(b,c));
            v_indir[b].push_back(make_pair(a,c));
        }
        int src=1;
        vector<int>vec;
        int vis[105]= {0};
        stack<int>s;
        s.push(src);
        vis[src]=1;
        while(!s.empty())
        {
            int u = s.top();
            vec.push_back(u);
            s.pop();
            for(int i=0; i<2; i++)
            {
                int v=v_indir[u][i].first;
                if(vis[v]==0)
                {
                    vis[v]=1;
                    s.push(v);

                }

            }
        }
        int X=0,Y=0;
        vec.push_back(src);
        int len = vec.size();
        //for(int i=0;i<len;i++)cout<<vec[i]<<" ";
        //return 0;
        for(int i=1; i<len; i++)
        {
            int p = vec[i-1];
            int q = vec[i];
            int l_di = v_dir[p].size();
            bool bb=1;
            for(int j=0; j<l_di; j++)
            {
                if(v_dir[p][j].first==q)
                {
                    X+=v_dir[p][j].second;
                    bb=0;
                    break;
                }
            }
            if(bb)
            for(int j=0; j<2; j++)
            {
                if(v_indir[p][j].first==q)
                {
                    Y+=v_indir[p][j].second;
                    break;
                }
            }

        }
        printf("Case %d: %d\n",++cases,min(X,Y));
    }
}
