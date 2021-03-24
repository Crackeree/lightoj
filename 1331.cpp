#include<cstdio>
#include<algorithm>
#include<iostream>
#include<math.h>
#define PI 3.14159265359
using namespace std;

int main()
{
    int t ,i=0;
    double  a ,b ,c , R1 , R2 ,R3 ,A ,B, C ,x ,y,Area , s, ex_area ,diamond;
    while(1==scanf("%d",&t))
    {

        while(t--)
        {
           scanf("%lf %lf %lf",&R1 , &R2 ,&R3) ;
           a= R1 + R2;
           b= R2 + R3;
           c= R1 + R3;
            x = (b*b  + c*c - a*a)/(2*b*c) ;
           A= acos(x);
           y = (a*a  + c*c - b*b)/(2*a*c) ;
           B = acos( y) ;
           C=  PI- A - B ;

           s= (a+b+c)/2.0;
           Area = sqrt(s*(s-a)*(s-b)*(s-c));
           ex_area = 0.5*(A*R3*R3 + B*R1*R1 + C*R2*R2);

           diamond = Area - ex_area;
           printf("Case %d: ",++i);
           printf("%.10lf\n",diamond);



        }
    }
    return 0;
}
