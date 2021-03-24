#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double x,y,c;
        scanf("%lf %lf %lf",&x,&y,&c);

        double small = (x<y)?x:y;

        double lo = 0.001, hi = small+0.05, w;

        while(lo<=hi)
        {
            w = (lo+hi)/2.0;
            double p = sqrtl(x*x - w*w);
            double q = sqrtl(y*y - w*w);
            if((double) abs(c*(p+q) - p*q) < 1.0e-7)break;
            if(c*(p+q)>p*q)hi = w - 1.0e-7;
            else if(c*(p+q)<p*q) lo = w + 1.0e-7;
        }
        printf("Case %d: %.10f\n",i,w);
    }
}

