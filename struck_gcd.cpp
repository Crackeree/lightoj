#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>



using namespace std;

int main()
{

    int t, n, temp, i, j;
    while(1==scanf("%d",&t))
    {
        while(t--)
        {
            scanf("%d",&n);
            int arr[n];
            temp=0;
            for(i=0; i<n; i++){
                scanf("%d",&arr[i]);
                if(arr[i]==1)temp=1;
            }
            if(temp==0){
            for(i=0; i<n-1; i++)
            {


                    for(j=i+1; j<n; j++)
                    {
                        if(arr[i]!= arr[j])
                        if(__gcd(arr[i],arr[j])==1)
                        {



                               temp=1;
                                break;

                        }


                    }
                    if(temp)break;

            }
        }
            if(temp==0)printf("NO\n");
            else printf("YES\n");

    }
    }
        return 0;
















}

