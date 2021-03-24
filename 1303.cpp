#include<bits/stdc++.h>
using namespace std;


bool cmp1(pair<long long, long long> p1, pair<long long , long long> p2)
{
    if(p1.first!=p2.first)return p1.first<p2.first;
    return p1.second<p2.second;
}

bool cmp2(pair<long long, long long> p1, pair<long long ,long long> p2)
{
    if(p1.second!=p2.second)return p1.second<p2.second;
    return p1.first<p2.first;
}

int main()
{

    long long n;
    cin>>n;
    vector<pair<long long, long long> >vc,vc1;;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vc.push_back({a,b});

    }
    vc1=vc;
    long long start=0,end=n-1,sum1=0;
    int count_=0;
    for(int i=0;i<n;i++)
    {
        if(count_%2==0)
        {
            auto it = max_element(vc.begin(),vc.end(),cmp1);
            sum1+=(it->first*start + it->second*end);
            vc.erase(it);

        }
        else{
            auto it = max_element(vc.begin(),vc.end(),cmp2);
            sum1+=(it->first*end + it->second*start);
            vc.erase(it);
            start++;
            end--;
        }
        count_++;
    }

    long long sum2 =0;
    vc= vc1;
    count_= 0;
    start=0,end=n-1;


   for(int i=0;i<n;i++)
    {
        if(count_%2!=0)
        {
            auto it = max_element(vc.begin(),vc.end(),cmp1);
            sum2+=(it->first*start + it->second*end);
            vc.erase(it);
            start++;
            end--;

        }
        else{
            auto it = max_element(vc.begin(),vc.end(),cmp2);
            sum2+=(it->first*end + it->second*start);
            vc.erase(it);

        }
        count_++;
    }

    cout<<min(sum1,sum2)<<endl;

}
