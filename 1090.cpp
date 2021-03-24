#include<cstdio>
#include<iostream>
using namespace std;
int arr[1000000][2]{0};



void prime_factorization(void)
{
    int sum2=0,sum5=0;

    for(int i=2; i<=1000000; i*=2)
    {
        for(int j=i; j<=1000000; j+=i)
        {


            arr[j][0]++;
        }
    }
    for(int i=5; i<=1000000; i*=5)
    {
        for(int j=i; j<=1000000; j+=i)
        {

            arr[j][1]++;
        }
    }
    for(int i=1;i<=1000000;i++)
    {
        sum2+=arr[i][0];
        arr[i][0]=sum2;
        ///cout<<"sum2: "<<sum2<<endl;

        sum5+=arr[i][1];
        arr[i][1]=sum5;
        ///cout<<"sum5: "<<sum5<<endl;
    }


}
int main()
{


    prime_factorization();
    int t;
    int n,r, p, q;
    while( 1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {
            scanf("%d %d %d %d",&n,&r,&p,&q);
            int count2=0,count5=0;

            count2 = arr[n][0]-arr[r][0]-arr[n-r][0];
            count5 = arr[n][1]-arr[r][1]-arr[n-r][1];
            int p2=arr[p][0]-arr[p-1][0];
            int p5=arr[p][1]-arr[p-1][1];

            p2 *= q;
            p5 *= q;

            count2+=p2;
            count5+=p5;

            int small = (count2>=count5)?count5:count2;
            printf("Case %d: %d\n",++k,small);


        }
    }

}




