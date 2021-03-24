#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<vector>
#define M 10000000

using namespace std;

int main()
{
    int t;
    while(1==scanf("%d",&t))
    {
        int k = 0;
        while(t--)
        {
            long long n;
            scanf("%lld",&n);
            double d = sqrtl(n);
            int z= d;
            vector<long long>vc1,vc2;


            for(long long i=1;i<=z;i++)
            {
                if(n%i==0)
                {
                  vc1.push_back(i);
                  vc2.push_back(n/i);
                }
            }
            if(d-z==0)vc1.erase(vc1.end()-1);

            vc1.insert(vc1.end(),vc2.begin(),vc2.end());
            int count = 0,sz=vc1.size();
            for(int i = 0 ;i <sz ; i++)
            {
                for(int j=i ;j< sz ; j++)
                {
                    if( (vc1[i]*vc1[j]/__gcd(vc1[i],vc1[j]) )==n)count++;
                }
            }
            printf("Case %d: %d\n",++k,count);
        }
    }
}

