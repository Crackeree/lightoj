#include<stdio.h>
#include<math.h>
#define PI acos(-1)/3.0
int main()
{
    int t;
    while(1==scanf("%d",&t))
    {
        double R , r , h , p , l , x , v , i = 0 ;
        while(t--){
        scanf("%lf %lf %lf %lf", &R , &r , &h ,&p);

        x = (R-r)*p/h;
        x += r ;
        l = h*r/(R-r);
        v = PI*(x*x*(p+l) - r*r*l);
        printf("Case %d: %.10lf\n",(int)++i,v);
        }



    }
    return 0;

}
