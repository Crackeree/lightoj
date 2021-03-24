#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double L,n,C;
        scanf("%lf %lf %lf",&L,&n,&C);
        double L_  = L*(1.0+n*C);
        int count_ = 60;
        double lo = 0 , hi = L , x,LL,theta,r,c=L*0.5;
        while(count_!=0)
        {
            x=(lo+hi)*0.5;
            r = (c*c*0.5)/x + x*0.5;
            theta = 2.0*asinl(c/r);
            LL = r*theta;
            if(LL>L_)hi = x;
            else lo = x;
            count_--;


        }
        printf("Case %d: %lf\n",i,x );

    }
}
