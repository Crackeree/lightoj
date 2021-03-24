#include<cstdio>
#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{


    int t;
    while(1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {

            int q;
            scanf("%d",&q);
            double digit = logl(q)/logl(5);
            ///cout<<digit<<endl;
           /// int f_digit=digit;
            ///cout<<f_digit<<endl;
            int c_digit = ceil(digit);
            ///cout<<c_digit<<endl;

            ///double f_n = q*arr[f_digit]/s_arr[f_digit];
           /// cout<<f_n<<endl;
            ///double c_n = q*arr[c_digit]/s_arr[c_digit];
            double c_q = q*4.0;
            c_q/=5.0;
            int qq = ceil(c_q)*5;
            ///cout<<c_n<<endl;
            ///int a[4];
            ///a[0] = f_n;1
            ///a[1] = ceil(f_n);
            /// int low = qq;
           /// a[3] = ceil(c_n);
            //sort(a,a+4);
            ///cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
            int start = qq;
            ///double d = a[3];
           /// int last =  ceil(d/5.0)*5;
           ///c_digit*=1000;
           int last = start  + (5*c_digit);
            ///cout<<start <<" "<<last<<endl;
            bool b = 0;
            int num;
            for(int i = start;i<=last;i+=5)
            {
                int temp=i,count=0;
                while(temp)
                {
                    count+= (temp/=5);

                }
                if(count==q)
                {
                    num=i;
                    b=1;
                    break;
                }

            }
            if(b==0)printf("Case %d: impossible\n",++k);
            else printf("Case %d: %d\n",++k,num);














        }
    }
}
