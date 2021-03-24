#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
#include<sstream>
#include<math.h>
#define M 100
using namespace std;
bool arr[M];
int z=sqrtl(M);
class how
{
    public:
    int count_[101];

};
how prime[101];
void seive (void)
{
    arr[0]=1;
    arr[1]=1;
    int i , j;
    for(i=4;i<=M;i+=2)arr[i]=1;
    for(i=3;i<=10;i+=2)
    {
        if(arr[i]==0)
        {
            for(j=i*i;j<=M;j+=2*i)arr[j]=1;
        }
    }

}
void prime_factorization(void)
{
    seive();
    for(int i=2;i<=M;i++)
    {



        if(arr[i]==1){

        for(int j=2;j*2<=i;j++)
        {
            if(arr[j]==0){
            int n=i;
            int count = 0;
            while(n)
            {
               if(n%j==0){n/=j; count++;}
               else break;

            }

            prime[i].count_[j]=count;

            }
        }
        }
        else{
                 prime[i].count_[i]=1;



        }

    }

}

int main()
{
    prime_factorization();
    int t,n ;
    while(1==scanf("%d",&t)){
            int k=0;
    while(t--)
    {
       scanf("%d",&n);
       printf("Case %d: %d = ",++k,n) ;

    for(int i=2;i<=n;i++)
    {
        int sum=0;
        for(int j = 2 ;j<=n;j++)
        {
            if(arr[i]==0)
            {
               sum+=prime[j].count_[i];

            }
        }
        if(sum)

        {
            if(i==2)printf("%d (%d)",i,sum);
            else{
                printf(" * %d (%d)",i,sum);
            }
        }
    }
    printf("\n");
}
}
}

