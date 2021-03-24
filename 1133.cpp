#include<cstdio>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std ;

int main()
{

int t ,i=0 , j=0,k=0,n , m;

    while(1==scanf("%d",&t))
    {


    i=0;
        while(t--)
        {
            int ara1[105] ,temp ,y ,z,s,M,d,U;
            scanf("%d %d",&n,&m);

            j=0;
            while(n--)
            {
                scanf("%d",&temp);
                ara1[j]=temp;
                j++;

            }
            char tP;




                A:
                    getchar();
                    scanf("%c",&tP);


                if(tP =='P' ){
                        scanf("%d %d",&y ,&z);
                        int t = ara1[y];
                        ara1[y]=ara1[z];
                        ara1[z]=t;

                }
                else if (tP=='S'){
                    scanf("%d",&s);
                    for(k=0;k<j;k++)ara1[k]+=s;
                }
                else if (tP=='M'){
                    scanf("%d",&M);
                    for(k=0;k<j;k++)ara1[k]*=M;
                }
                else if (tP=='D'){
                    scanf("%d",&d);
                    if(d!=0)
                    for(k=0;k<j;k++)ara1[k]/=d;
                }
                else if (tP=='R'){

                    std::reverse(ara1,ara1+j);
                }

                if(--m!=0)goto A;

            printf("Case %d:\n",++i);
            for(k=0;k<j;k++)
            {
                printf("%d",ara1[k]);
                if(k!=j-1)printf(" ");
            }
            printf("\n");

    }
}
}

