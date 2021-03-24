#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define M 1002000
long long arr[M+2];
long long re_arr[M+2];
bool b[M+2];
void Eular(void)
{
    for(long long i = 1 ; i<=M ; i++)
    {
        arr[i]=i;
    }
    long long i , j;
    arr[2]=1;
    for(i=4;i<=M;i+=2)
    {
       arr[i]/=2;
        b[i]=1;
    }
    for(i=3;i<=M;i+=2)
    {
        if(b[i]==0)
        {
            arr[i]-=1;
            for(j=2*i;j<=M;j+=i)
            {
                arr[j]/=i;
                arr[j]*=(i-1);
                b[j]=1;
            }
        }

    }

    arr[1]=0;
    ///sort(arr,arr+M);
    ////cout<<999983<<" "<<arr[999983]<<endl;
    int pos = 1;
    for(long long i=1; pos<=1000000 ;)
    {
        if(arr[i]>=pos)re_arr[pos++]=i ;
        else i++;
    }
}
int main()
{

    Eular();
///for(int i = 999980 ; i<=1000000 ; i++)cout<<"Eular Toutient : "<<i<<" Number: "<<re_arr[i]<<endl;
///return 0;


    int t;
    while(1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {
            int n;
            long long sum=0;
            scanf("%d",&n);
            int num;
            while(n--)
            {

               scanf("%d",&num);
               sum+=re_arr[num];


            }
            printf("Case %d: %lld Xukha\n",++k,sum);
        }
    }

}
