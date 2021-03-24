#include<bits/stdc++.h>
using namespace std;
int main()
{


    int f [ ] = { 1 , 1 , 2 , 6 , 24 };



    int t,n,k;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<":\n";
        cin>>n>>k;
        if(n<=4 && f[n]<k)k = f[n];
        string s;
        for(int j=0;j<n;j++)s.push_back(j+65);
        cout<<s<<endl;
        --k;
        while(k--)
        {
            next_permutation(s.begin(),s.end());
            cout<<s<<endl;
        }

    }
}

