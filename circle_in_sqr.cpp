#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
   double t,r,z;
   while(1==scanf("%lf",&t))
   {
       int i=0;
      while(t--)
         {
           scanf("%lf",&r);
           z= (4-pi)*r*r;
           printf("Case %d: %.2lf\n",++i,z+10e-9);
         }


   }
 return 0;





}
