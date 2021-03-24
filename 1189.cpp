#include<bits/stdc++.h>

using namespace std;

vector <long long> facto;

int main()
{
    long long  sum = 1;

    facto.push_back(1);
    for( long long i=1; i<=20; i++)
    {
        sum*=i;

        facto.push_back(sum);


    }

    //cout<<facto[20]<<endl;
    //return 0;





    int t=0;

    scanf("%d",&t);


    int cases = 0;

    while(t--)
    {

        long long n=1;
        scanf("%lld",&n);
        stack<int>st;
        for(int j=20; j>=0; j--)
        {
            if(n>=facto[j])
            {
                n-=facto[j];
                st.push(j);
            }
        }
        if(n>0)printf("Case %d: impossible\n",++cases);
        else
        {
            int temp = st.top();
            printf("Case %d: %d!",++cases,temp);
            st.pop();
            while(!st.empty())
            {
                temp = st.top();
                printf("+%d!",temp);
                st.pop();
            }
            printf("\n");
        }

    }


    return 0;



}
