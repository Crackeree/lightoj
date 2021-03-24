#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{



    int t ,i;
    double l ,l_ ,n ,c ,r1,r2,r ,h ,d1 , d2 ,d ,dis, l_2 , l2 , L ,k, m , the1 , the2,the;
    while(1==scanf("%d",&t))
    {
        i=0;
        while(t--)
        {
            scanf("%lf %lf %lf",&l ,&n ,&c);
            l_=l*(1+n*c);
            //l_2= l_*l_;
            if(l==l_) printf("Case %d: %.10lf\n",++i,0);
            else{
            l2=l*l;
            k=l/l_;
            m=1920-1920*k;
            the1=sqrtl(40+ sqrtl(1600-m));
            the2=sqrtl(40- sqrtl(1600-m));
            r1=l_/the1 ;
            r2=l_/the2 ;


            d1= (r1*r1 -l2/4);
            d2=(r2*r2 -l2/4);
            if(d1<0){
                    d=d2;
                    dis=sqrtl(d);
                     h=r2-dis;
            }
            else {
                d= d1;
                dis=sqrtl(d);
                h=r1-dis;
            }
            printf("Case %d: %.10lf\n",++i,h);
        }
        }
    }
    return 0;
}
