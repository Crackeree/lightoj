
#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#define M 1000000000


using namespace std;
vector <bool> vec(32000,0);
int arr[1000000];

 void seive()
{
int i=4,j;

    for(;i<32000;i+=2)
    {
        vec[i]=1;

    }

    for(i=3;i*i<=32000;i+=2)
   {


        for(j=i*i;j<32000;j+=2*i)vec[j]=1;
   }


}




void seg_seive(int n , int m)
{

   memset(arr,1,sizeof(arr));
    int i ,j;
    for(i=2;i*i<=m;i++)
    {
        if(vec[i]==0){
        j=i*i;
        if(j<n){
            j=ceil((double)n/i);
            j*=i;
        }
        for(;j<=m;j+=i) arr[j-n]=0;
        }
    }




}






int main()
{

seive();
int a ,b,i,ans;
while(2==scanf("%d %d",&a,&b))
{
    if(a<=2)a=3;
    seg_seive(a,b);
    ans=0;

    for(i=0;i<b-a+1;)
    {
       if( arr[i++] && ++i<b-a+1 )
       {
           if(arr[i])ans++;
       }
    }
    printf("%d\n",ans);
}
return 0;

}
