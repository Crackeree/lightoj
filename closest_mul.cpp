
#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{



    int t ;
     long long int a , b ,x ,a_b ,d;
     double ab ;
    while(1==scanf("%d",&t))
    {

        while(t--)
        {
            scanf("%lld %lld %lld",&a ,&b ,&x);
            a_b = powl(a,b);
            ab=powl(a,b);
            d=a_b/x;
            if(a==1 &&x==1)printf("%lld\n",x);
            else if(a==1 && x>1)printf("%lld\n",d);
            else if (a>1 )
            {
                if(b==0)
                {
                    if(x==1)printf("%lld\n",x);
                    else printf("%lld\n",d);
                }
                else if(b>0)
                {
                    if((a_b - x*d)<=(x*(d+1)-a_b))printf("%lld\n",x*d);
                    else printf("%lld\n",x*(d+1));
                }
                else{
                    if(x==1)
                    {
                        if(ab<=0.5)printf("%lld\n",d);
                        else printf("%lld\n",x);
                    }
                    else printf("%lld\n",d);


                }
            }


        }




    }
    return 0;











        }
