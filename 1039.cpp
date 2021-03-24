
#include<bits/stdc++.h>
using namespace std;
char str[50][3][109];
int sum = 0;
int n;
char start[5];
char finish[5];
int

void dfs(char[] src)
{
    if(src==finish)return;

    for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                int len = strlen(str[i][j]);
                bool b=1;
                for(int k=0; k<len; k++){
                    if(src[j]!=str[i][j][k])
                    {
                        b=0;
                        break;
                    }
                }
                if(b==1)
                {
                  return;
                }

            }
        }
        int temp=0;
        for(int i=0;i<3;i++)
        {
        char c[5];
        strcpy(c,src);

        temp = src[i]+1;
        if(temp==123)temp=97;
        c[i]=temp;
        dfs(c);

        temp = src[i]-1;
        if(temp==96)temp=122;
        dfs(c);

        }

}
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    int cases=0;
    while(t--)
    {
        sum=0;
        getchar();

        scanf("%s",start);
        getchar();
        scanf("%s",finish);
        ///cout<<start<<endl<<finish<<endl;
        memset(str,0,sizeof(str));


        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            getchar();
            scanf("%s %s %s",str[i][0],str[i][1],str[i][2]);
        }
        bool flag=1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                int len = strlen(str[i][j]);
                bool b=1;
                for(int k=0; k<len; k++){
                    if(finish[j]!=str[i][j][k])
                    {
                        b=0;
                        break;
                    }
                }
                if(b==1)
                {
                  flag=0;
                  printf("Cases %d: -1\n",++cases);
                }

            }
        }
        if(flag==0)continue;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                int len = strlen(str[i][j]);
                bool b=1;
                for(int k=0; k<len; k++){
                    if(start[j]!=str[i][j][k])
                    {
                        b=0;
                        break;
                    }
                }
                if(b==1)
                {
                  flag=0;
                  printf("Cases %d: -1\n",++cases);
                }

            }
        }
        if(flag==0)continue;


        dfs(start,finish);

        /*for(int i=0;i<n;i++)
        {
            cout<<str[i][0]<<" "<<str[i][1]<<" "<<str[i][2]<<endl;
        }*/



    }
}
