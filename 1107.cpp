#include<bits/stdc++.h>
using namespace std;
int main()
{



    int t , x1 , y1 , x3 , y3 , m , count;
    while(1==scanf("%d",&t))
    {
        count = 0;
        while(t--)
        {
            cin>>x1>>y1>>x3>>y3;
            cin>>m;
            cout<<"Case "<<++count<<":\n";
            int arrx[m] , arry[m];
            int i =0;
            while(m--)
            {
                cin>>arrx[i]>>arry[i];
                if(arrx[i]>x1 && arrx[i]<x3 && arry[i]>y1 && arry[i]<y3)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
                i++;
            }

        }
    }
}
