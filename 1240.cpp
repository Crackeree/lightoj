#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int t;
    while(1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {
            double x1 , y1 ,z1 , x2 , y2 , z2 ,x , y , z;
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf", &x1 , &y1 , &z1 , &x2 , &y2 , &z2 , &x , &y , &z);

            double AB = sqrtl(  (x1-x2)*(x1-x2)  +  (y1-y2)*(y1-y2)   + (z1-z2)*(z1-z2)  );

            double AP = sqrtl(  (x1-x)*(x1-x)  +  (y1-y)*(y1-y)   + (z1-z)*(z1-z)  );

            double BP = sqrtl(  (x-x2)*(x-x2)  +  (y-y2)*(y-y2)   + (z-z2)*(z-z2)  );

            double theta = ( AB*AB + BP*BP - AP*AP ) / (  2*AB*BP  );


            theta = acos(theta);
            double ans;
            if(AB==0 || BP==0)ans=AP;
            else
            {
                    ans = BP*sin(theta);
                    if(ans<0)ans*=-1;

            }

            ///printf("Case %d: %.10f\n",++k,ans);
            //cout<<fixed;
            cout<<setprecision(10);
            cout<<"Case "<<++k<<": "<<ans<<endl;

        }
    }
}
