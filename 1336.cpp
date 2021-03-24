#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
#define M 1000000
bool s[M+2];
int arr[333340];
void sieve(void)
{
    s[0]=1;
    s[1]=1;
    s[2]=0;
    int i, j,sqrtM = sqrtl(M);
    for(i=4; i<=M; i+=2)s[i]=1;
    for(i=3; i<=sqrtM; i+=2)
    {
        if(s[i]==0)
        {
            for(j=i*i; j<=M; j+=2*i)
            {
                s[j]=1;
            }
        }
    }
    arr[0]=2;
    int pos=1;
    for(i=3;i<=46350;i+=2)
    {
        if(s[i]==0)arr[pos++]=i;
    }
}









int main()
{
  sieve();
  for(int i=1;i<=1000000000)
  return 0;
}
