#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a , long long b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main()
{
    int t;
    while(1==scanf("%d",&t))
    {
        int k = 0;
        while(t--){


    long long L , a , b , c,lcm,LL;
    scanf("%lld %lld %lld",&a,&b,&L);
    LL= L;
    long long g = gcd(a,b);
    lcm = a/g;
    lcm*=b;
    double dL=L,dLcm = lcm;
    dL/=dLcm;
    if(dL - (int)dL!= 0){printf("Case %d: impossible\n",++k);continue;}
    else L = dL;
    long long i=0,cc=L;
    while(1)
    {
        ++i;
        c=L*i;
        cc=c;
        long long gc = gcd(lcm,c);
        c/=gc;
        if(c == L ){printf("Case %d: %lld\n",++k,cc);break;}
        if(cc >= LL)break;




    }
    if(c!=L)printf("Case %d: impossible\n",++k);
        }
    }


}
