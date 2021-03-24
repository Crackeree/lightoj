#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long sum=1,arr[21];
    arr[0]=1;
    for(int i=1;i<=20;i++)
    {
        sum*=i;
        arr[i]=sum;
    }


    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
       char str[25]={0};
       scanf("%s",str);
       scanf("%d",&n);
       int len = strlen(str);
       sort(str,str+len);
       char c = str[0];
       long long count_ = arr[len],k=0;
       int digit[30];
       memset(digit,-1,sizeof(digit));
       //for(int j=0;j<30;j++)cout<<digit[j]<<endl;
       for(int j=0;j<=len;j++)
       {
           if(str[j]!=c)
           {

               count_/=arr[k];
               digit[c-97]=k;
               c=str[j];
               k=1;
           }
           else k++;
       }
       for(int j=0;j<30;j++)cout<<digit[j]<<endl;

       if(count_<n)printf("Case %d: Impossible\n",i);
       else
       {


       }

    }
}
