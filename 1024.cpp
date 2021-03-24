#include<bits/stdc++.h>
using namespace std;

bool vis[10020];
vector <int> prime;
void seive(void)
{
   for(int i=4;i<=10015;i+=2)vis[i]=1;
   for(int i=3;i*i<=10015;i+=2)
   {
       if(vis[i]==0)
       {
           for(int j = i*i ; j<= 10015 ; j += (i<<1))vis[j]=1;
       }
   }

   prime.push_back(2);
   for(int i=3;i<=10015;i+=2)
   {
       if(vis[i]==0)
       {
           prime.push_back(i);

       }
   }
}

string M(string s, int a)
{
    int len = s.size();
    int carry = 0;
    for(int i = 0 ; i < len ; i++)
    {
        int temp = (s[i]-48)*a;
        carry+= temp;
        s[i] = carry%10 + 48;
        carry/=10;
    }

    while(carry)
    {
        s += carry%10 + 48;
        carry/=10;
    }
    return s;
}

int main()
{
    seive();
    int len = prime.size();
    int t;
    scanf("%d",&t);
    int cases=0;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int fact[1235];
        memset(fact,0,sizeof(fact));

        for(int i=0;i<n;i++)
        {
            int xx;
            scanf("%d",&xx);

            int temp =xx;
            for(int j=0;prime[j]*prime[j]<=temp;j++)
            {
                int mul = 1;
                while(temp%prime[j]==0)
                {
                    mul*=prime[j];
                    temp/=prime[j];
                }
                fact[j] = max(fact[j],mul);
            }
            if(temp>1)
            {
                int k = lower_bound(prime.begin(),prime.end(),temp) - prime.begin();
                fact[k] = max(fact[k],temp);


            }


        }
        string ans = "1";
        for(int i=0 ; i<len ; i++)
        {


            if(fact[i]!=0)
            {
               ans  = M(ans,fact[i]);
            }

        }
        reverse(ans.begin(),ans.end());
        printf("Case %d: %s\n",++cases,ans.c_str());


    }
}
