#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,k=0;
    scanf("%d",&t);
    while(t--){
    char a[210];
    long long int b;
    scanf("%s %lld",a,&b);
    long long int i=0,l=strlen(a);
    long long int sum = 0;
    if(a[0]=='-')i++;
    while(i<l)
    {
        sum=((sum*10)+(a[i]-48))%b;
        i++;
    }
    if(sum%b)printf("Case %d: not divisible\n",++k);
    else printf("Case %d: divisible\n",++k);
    }
    return 0;
}
