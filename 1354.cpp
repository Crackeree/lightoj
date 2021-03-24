#include <bits/stdc++.h>

using namespace std;
int p,q,r,s;

void stod(char str[])
{
    int j = 4, i=-1 ;
    while(j--)
    {
        int mul=128,sum=0,loop=8;
        while(loop--)
        {
            ++i;
            if(str[i]=='.')
            {
                break;
            }
            int temp ;
            temp = str[i] - 48 ;

            if(temp)sum=sum+mul;
            mul=mul/2;



        }
        if(j==3)p=sum;
                else if(j==2)q=sum;
                else if(j==1)r=sum;
                else s = sum;
        ++i;
        //cout<<sum<<endl;


    }
}



int main()
{
    int t,i=0,a,b,c,d;
    char str[36];
    while (scanf("%d",&t)==1)
    {
        i=0;
        while(t--)
        {
            scanf("%d.%d.%d.%d",&a,&b,&c,&d);
            scanf("%s",str);
            stod(str);
            if(p==a && q==b && r==c && s==d)
                printf("Case %d: Yes\n",++i);
            else
                printf("Case %d: No\n",++i);


                //cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
               // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;




        }
    }
    return 0;



}
