#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t ,r1 , c1 , r2 , c2;
    while(1==scanf("%d",&t))
    {
        int i=0;
        while(t--)
        {
            cin>>r1>>c1>>r2>>c2;
            int a = (r1+c1)%2;
            int b = (r2+c2)%2;
            if(a==b)
            {
                int d1 = (r1 - c1);
                int d2 = (r2 - c2);
                int a1 = r1 + c1;
                int a2 = r2 + c2;
                if(d1==d2)
                {
                    int b1 = r1 - r2;
                    int b2 = c1 - c2;
                    if(b1==b2)cout<<"Case "<<++i<<": "<<"1\n";
                    else cout<<"Case "<<++i<<": "<<"2\n";

                }
                else if(a1==a2)cout<<"Case "<<++i<<": "<<"1\n";
                else cout<<"Case "<<++i<<": "<<"2\n";

            }
            else{
                cout<<"Case "<<++i<<": impossible\n";
            }


        }
    }
}
