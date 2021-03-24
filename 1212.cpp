#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int cases=0;
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int count=0;
        list<int>l;
        printf("Case %d:\n",++cases);
        while(m--)
        {
            char str[100]= {0};
            scanf("%s",str);
            if(str[1]=='u')
            {
                int x;
                scanf("%d",&x);
                if(count<n)
                {

                    if(str[4]=='L')
                    {
                        l.push_front(x);
                        printf("Pushed in left: %d\n",x);
                        count++;

                    }
                    else
                    {
                        l.push_back(x);
                        printf("Pushed in right: %d\n",x);
                        count++;

                    }
                }
                else
                {
                    printf("The queue is full\n");
                }
            }
            else
            {
                if(count>0)
                {
                    if(str[3]=='L')
                    {
                        printf("Popped from left: %d\n",l.front());
                        l.pop_front();
                        count--;
                    }
                    else
                    {
                        printf("Popped from right: %d\n",l.back());
                        l.pop_back();
                        count--;
                    }
                }
                else
                {
                    printf("The queue is empty\n");
                }

            }
        }
    }
}
