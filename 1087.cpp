#include<bits/stdc++.h>
using namespace std;
int n,q;
vector<int>arr(100009,0);
int tree[400009 + 50];

void update(int node,int start, int end, int val)
{

    if(start==end && start==val)
    {
        if(start!=n)
            arr[start]=arr[start+1];
        tree[node]=0;
        return;
    }
    else if(start==end && start>val)
    {
        if(start != n)
            arr[start]=arr[start+1];
        tree[node]--;
        return ;
    }
    else if(start==end && start<val)
    {
        return;
    }

    int mid = (start+end)/2;

    update(2*node,start,mid,val);


    update(2*node+1,mid+1,end,val);


    tree[node]= tree[2*node]+tree[2*node+1];
    return;
}


void build(int node,int start, int end)
{
    if(start==end)
    {
        tree[node]=start;

    }
    else
    {
        int mid  = (start+end)/2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}
int query(int node, int start, int end, int val)
{

    if(start==end )
    {
        return tree[node];
    }
    int mid  = (start+end)/2;
    int p=-1,q=-1;
    if(val<=tree[2*node])
    {
         p = query(2*node,start,mid,val);
    }
    if(val<= tree[2*node+1])
    {
        q = query(2*node+1,mid+1,end,val);
    }

    if(p<0)return q;
    else return p;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {


        scanf("%d %d",&n,&q);

        for(int j=1; j<=n; j++)
        {

            scanf("%d",&arr[j]);


        }



        printf("Case %d:\n",i);

        vector<int>qq;
        while(q--)
        {
            string ch;
            int k;

            cin>>ch>>k;
            if(ch=="c")
            {
                qq.push_back(k);
            }
            else
            {
                arr[n+1]=k;
                n++;
            }

        }
        if(n>1)
        build(1,1,n);





        for(int j=0; j<qq.size(); j++)
        {
            int d = -1;
            if(n>1)
            d = query(1,1,n,qq[j]);
            if(d==-1)
            {
                printf("none\n");
            }
            else
            {

                //cout<<d<<endl;
                printf("%d\n",arr[d]);
                update(1,1,n,d);
                /*cout<<"tree\n";
                for(int k=0;k<100;k++)cout<<tree[k]<<endl;
                cout<<"tree end\n";*/



            }
        }






        arr.clear();
        memset(tree,0,sizeof(tree));



    }
}
