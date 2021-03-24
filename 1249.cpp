#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t , n , x , y , z, temp1 , temp2 , temp3 , temp4 ,j;

    while(1==scanf("%d",&t))
    {
          j=0;
            while(t--)
            {
                cin>>n;
                string str[n];
                int i=0,arr[n];
                temp1=-100000;
                temp2=100000;
                while(n--)
                {
                    cin>>str[i]>>x>>y>>z;
                    arr[i]=x*y*z;
                    if(arr[i]>temp1){temp1=arr[i];temp3=i;}
                    if(arr[i]<temp2){temp2=arr[i];temp4=i;}
                    i++;

                }
                //cout<<temp1<<" "<<temp2<<endl;

                if(temp2>temp1)cout<<"Case "<<++j<<": "<<str[temp4]<<" took chocolate from "<<str[temp3]<<endl;
                else if(temp1>temp2)cout<<"Case "<<++j<<": "<<str[temp3]<<" took chocolate from "<<str[temp4]<<endl;
                else cout<<"Case "<<++j<<": "<<"no thief"<<endl;

            }

    }


}
