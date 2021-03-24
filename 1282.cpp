#include<bits/stdc++.h>
using namespace std;

long long Bigmod(long long a, long long b)
{
    if(b==0)return 1;
    if(b%2==0)
    {
       long long p = Bigmod(a,b/2);
       return (p*p)%1000;
    }
    else{
            long long p = Bigmod(a,b-1);
             return (a*p)%1000;

    }
}




int main()
{
   int t;
   scanf("%d",&t);
   for(int i=1;i<=t;i++)
   {
       long long n,k;
       scanf("%lld %lld",&n,&k);
       long long lsd = Bigmod(n%1000,k);
       char* str="";
       if(lsd==0)str="00";
       else if(lsd<10)str="00";
       else if(lsd<100)str="0";

       double d = k*log10l(n);
       double r = d - (int)d;
       double msd = powl(10,r);
       printf("Case %d: %d %s%lld\n",i,(int)(msd*100),str,lsd);


   }
   return 0;
}

