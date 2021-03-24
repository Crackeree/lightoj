#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int ox, oy,ax ,ay, bx, by,t,i ;
    while(1==scanf("%d",&t))
    {
        i=0;
        while(t--)
        {
            cin>>ox>>oy>>ax>>ay>>bx>>by;
            double area , r , theta , arc , cord;
            r= sqrtl((ax-ox)*(ax-ox)+(ay-oy)*(ay-oy));
            ///cout<<r<<endl;
            cord=sqrtl((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
            ///cout<<cord<<endl;
            theta = acos(1-(cord*cord)/(2*r*r));


            arc=theta*r;
           ///cout<<fixed;
           /// cout<<"Case "<<++i<<":"<<" "<<setprecision(8)<<arc<<"\n";
           printf("Case %d: %.10f\n",++i,arc);
           ///cout<<theta*180.0/acos(-1)<<endl;



        }

    }
    return 0;


}
