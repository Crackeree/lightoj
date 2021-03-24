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
        vector<int>vc;
        while(n!=0)
        {
            int r = n%2;
            n/=2;
            vc.push_back(r);
        }
        vc.push_back(0);
        //reverse(vc.begin(),vc.end());
        int i=0,l=vc.size();
        int one,zero;
        for( ; i<l;i++)
        {
            if(vc[i]==1)
            {
                one=i;
                break;
            }
        }
        for( ;i<l;i++)
        {
            if(vc[i]==0)
            {
                zero=i;
                break;
            }
        }
        int temp = vc[one];
        vc[one]=vc[zero];
        vc[zero]=temp;
        i=0;
        for(int j=zero-1;j>one;j--)
        {
            if(vc[j]==1)
            {
               for( ;i<=one;i++)
               {
                   if(vc[i]==0)
                   {
                      int temp = vc[i];
                      vc[i]=vc[j];
                      vc[j]=temp;
                      break;
                   }
               }
            }
        }

        /*reverse(vc.begin(),vc.end());
        for(int i=0;i<l;i++)
        {
            cout<<vc[i]<<" ";
        }
        cout<<endl;*/
        long long sum=0;
        for(int i=0;i<l;i++)
        {
            if(vc[i]==1)sum+=(1LL<<i);
        }
        printf("Case %d: %lld\n",++cases,sum);

    }
}
