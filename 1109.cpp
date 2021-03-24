#include<bits/stdc++.h>
using namespace std;
int div(int n)
{
    int i=1,s,c=0,k=0;
    double d = sqrt(n);
    s =d;
    if(d-s==0)k=1;
    while(i<=s)
    {

        if(n%i==0 )c+=2;
        i++;



    }
    if(k)c--;

    return c;
}


int main()
{
    int i,t,n;
    vector< pair<int,int> >mp;
       pair<int , int> p ;
    p.first=0;
    p.second=0;
    mp.push_back(p);
    for(i=1;i<1001;i++)
    {
       p.first=div(i);
       p.second=i;
       mp.push_back(p);
    }
    std::sort(mp.begin(),mp.end());
    for(i=2;i<1001;)
    {
        int initial;
        if(mp[i-1].first!=mp[i].first)initial=i++;
        if(i>=1001)break;
        while(mp[i-1].first==mp[i].first){i++;if(i>=1001)break;}
        int terminal = i;
        std::reverse(mp.begin()+initial,mp.begin()+terminal);

    }
    int j;
    while(1==scanf("%d",&t))
    {
        j=0;
        while(t--)
        {
            cin>>n;
            cout<<"Case "<<++j<<": "<<mp[n].second<<endl;

        }
    }

   return 0;

}
