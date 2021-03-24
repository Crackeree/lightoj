#include<bits/stdc++.h>
using namespace std;
vector<int> tree_max(400009,0);
vector<int> tree_min(400009,0);
vector<int>arr;
void build(int node, int start, int end)
{
    if(start == end)
    {

        tree_max[node] = arr[start];
        tree_min[node] = arr[start];
    }
    else
    {
        int mid = (start + end) / 2;

        build(2*node, start, mid);

        build(2*node+1, mid+1, end);

        tree_max[node] = max(tree_max[2*node] , tree_max[2*node+1] );
        tree_min[node] = min(tree_min[2*node] , tree_min[2*node+1] );
    }
}

int query_max(int node, int start, int end, int l, int r)
{
    if(r < start || end < l)
    {

        return 0;
    }
    if(l <= start && end <= r)
    {

        return tree_max[node];
    }

    int mid = (start + end) / 2;
    int p1 = query_max(2*node, start, mid, l, r);
    int p2 = query_max(2*node+1, mid+1, end, l, r);
    return max(p1 , p2);
}
int query_min(int node, int start, int end, int l, int r)
{
    if(r < start || end < l)
    {

        return 2000000000;
    }
    if(l <= start && end <= r)
    {

        //cout<<tree_min[node]<<endl;
        return tree_min[node];
    }

    int mid = (start + end) / 2;
    int p1 = query_min(2*node, start, mid, l, r);
    int p2 = query_min(2*node+1, mid+1, end, l, r);
    return min(p1 , p2);
}
int main()
{

    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,d;
        scanf("%d %d",&n,&d);
        for(int j=0; j<n; j++)
        {
            int tem;
            scanf("%d",&tem);
            arr.push_back(tem);

        }
        build(1,0,n-1);
    //for(int i=0;i<400000;i++)cout<<tree_min[i]<<endl;
    //return 0;

       if(n<=d)
       {
           printf("Case %d: %d\n",i,query_max(0,0,n-1,0,n-1) - query_min(0,0,n-1,0,n-1));
       }
       else
       {
           int m = -111111;
           for(int j=0,k=d-1;k<n;j++,k++)
           {
             int m1 = query_max(1,0,n-1,j,k) ;
             int m2 = query_min(1,0,n-1,j,k);
             //cout<<m1<<" "<<m2<<endl;
             m = max(m,m1-m2);

           }
           printf("Case %d: %d\n",i,m);
           arr.clear();


        }
    }


}

