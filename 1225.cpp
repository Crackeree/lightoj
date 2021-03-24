
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int k=0;
    while(n--)
    {
        char s[12];
        scanf("%s",s);
        int i=0,j=strlen(s)-1;
        for(;i<j;i++,j--)
        {
            if(s[i]==s[j]);
            else
            {
                printf("Case %d: No\n",++k);
                break;
            }
        }
        if(!(i<j))
        {
             printf("Case %d: Yes\n",++k);
        }
    }
}
