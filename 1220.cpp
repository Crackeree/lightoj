
#include<cstdio>
#include<iostream>
#include<vector>
#define M 47000
using namespace std;
bool b[M+5];
long long vc[4855];
int c;

void seive(void)
{
    b[0]=1;
    b[1]=1;
    b[2]=0;
    //for(int i=4; i<=M; i+=2)b[i]=1;
    for(int i=3; i*i<=M; i+=2)
    {
        if(b[i]==0)
        {
            for(int j=i*i; j<=M; j+=2*i)b[j]=1;
        }
    }

    vc[c++]=2;
    for(long long i=3; i<=M; i+=2)if(b[i]==0)vc[c++]=i;
}
int main()
{
    seive();
    //cout<<c<<endl;
    //return 0;
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {

           long long x,ans=0;
           scanf("%lld",&x);
           if(x<0)x*=-1;
           for(int j=0;vc[j]*vc[j]<=x;j++)
           {
               long long count_=0;
               while(x%vc[j]==0)
               {
                   x/=vc[j];
                   count_++;

               }
               if(count_>0){
               ans+=count_;
               break;
               }
           }
           if(x>1)ans+=1;
           printf("Case %d: %lld\n",i,ans);
    }
}
