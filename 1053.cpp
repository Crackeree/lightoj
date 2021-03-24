#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>



using namespace std;

int main()
{
    int t ,arm[3];
    while(1==scanf("%d",&t))
    {
        int i=0;
        while(t--)
        {
            scanf("%d %d %d",&arm[0] , &arm[1] ,&arm[2]);
            std::sort(arm,arm+3);
            printf("Case %d: ",++i);
            if(arm[0]+arm[1]>arm[2])
            {
                if(arm[0]*arm[0]+arm[1]*arm[1]==arm[2]*arm[2])printf("yes\n");
                else printf("no\n");

            }
            else printf("no\n");


        }
    }
    return 0;
}

