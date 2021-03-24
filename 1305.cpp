#include<cstdio>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std ;

int main()
{
    int t ,i=0;
    int  Ax , Ay , Bx ,By , Cx ,Cy ,Dx ,Dy;
    while(1==scanf("%d",&t))
    {

        while(t--)
        {
           scanf("%d %d %d %d %d %d",&Ax , &Ay , &Bx ,&By , &Cx ,&Cy) ;
           printf("Case %d: %d %d %d\n",++i,Ax + Cx - Bx , Ay + Cy -By ,abs( (Ax - Bx)*(By - Cy)-(Bx - Cx)*(Ay - By)));

        }

}
return 0;
}
