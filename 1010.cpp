#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
int t;
while(1==scanf("%d",&t))
{
int i = 0;
while(t--)
{
int m , n;
scanf("%d %d",&m,&n);
int z=m*n;
if(m==1 || n==1)printf("Case %d: %d\n",++i,z);
else if(m==2 || n==2)
{
    int k = z/2;
    if(k%2)printf("Case %d: %d\n",++i,k+1);
    else
    {
        int m = k/2;
        if(m%2)printf("Case %d: %d\n",++i,k+2);
        else printf("Case %d: %d\n",++i,k);
    }
}
else if(z%2)printf("Case %d: %d\n",++i,1+z/2);
else printf("Case %d: %d\n",++i,z/2);
}


}
}
