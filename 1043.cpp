#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double ab,ac,bc,r;
        scanf("%lf %lf %lf %lf",&ab,&ac,&bc,&r);
        double tem = (r*ab*bc)/(r+1);

        double lo = 0.001, hi = bc , de;
        double ad = tem;
        while(lo<=hi)
        {
            de = (lo+hi)/2.0;
            ad = tem;
            ad/=de;
            if((double) abs(ad*bc-de*ab) < 1.0e-7)break;

            if(ad*bc<de*ab)hi = de - 1.0e-7;
            else  if(ad*bc>de*ab) lo = de + 1.0e-7;
        }
        printf("Case %d: %.10f\n",i,ad);
    }
}
