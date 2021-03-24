#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=0;
    while(1==scanf("%d",&t))
    {
        k=0;
        while(t--)
        {
            unsigned long long w ;
            cin>>w;
            if(w%2!=0)cout<<"Case "<<++k<<": Impossible\n";
            else{

             unsigned long long  i;
            for( i=2;i<=9223372036854775808;i*=2)
            {
                if(w%i)break;

            }
            i/=2;
            w/=i;
            cout<<"Case "<<++k<<": "<<w<<" "<<i<<endl;
        }
        }
    }
}
