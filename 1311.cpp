#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    while(1==scanf("%d",&t))
    {
    int i = 0;
    while(t--)
    {
    long double v1 , v2 , v3 , a1 , a2;
    cin>>v1>>v2>>v3>>a1>>a2;
    long double time1 = v1/a1;
    long double time2 =v2/a2;
    long double d = (v1*v1)/(2*a1) + (v2*v2)/(2*a2);
    long double dis;
    if(time1>=time2)
     dis = v3*time1;
    else dis = v3*time2;
    cout<<fixed;
    cout<<setprecision(10);
    cout<<"Case "<<++i<<": "<<d<<" "<<dis<<endl;
   }

   }
}
