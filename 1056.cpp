#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    scanf("%d",&t);
    for(int i=1 ; i<=t ; i++)
    {

        double a,b;
        scanf("%lf : %lf",&a,&b);
        double k = a/b;
        double lo=0.0011,hi = 200/(k+1),y;
        while(lo<=hi)
        {

            y = (lo+hi)/2.0;
            double x = k*y;
            double rem = 400 - 2*x;
            rem/=2;
            double low = -1, high = 1-1.0e-9 , mid,r;
            while(low<=high)
            {
                mid = (low+high)/2.0;
                r = y/sqrtl(2*(1-mid));
                if( (double)abs(r*acos(mid)-rem) < 1.0e-7) break;
                if(r*acos(mid)<rem)high = mid-1.0e-7;
                else low = mid + 1.0e-7;

            }
        }
    }
}
