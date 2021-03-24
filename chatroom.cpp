#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105] , ch;
    cin>>s;
    int arr[5],i,sz = strlen(s),key=0;
    for(i=0;i<sz;)
    {
        if(s[i++]=='h')
        {
            arr[key++]=1;
            break;
        }
    }

    for(;i<sz;)
    {
        if(s[i++]=='e')
        {
            arr[key++]=1;
            break;
        }
    }

    for(;i<sz;)
    {
        if(s[i++]=='l')
        {
            arr[key++]=1;
            break;
        }
    }

    for(;i<sz;)
    {
        if(s[i++]=='l')
        {
            arr[key++]=1;
            break;
        }
    }

    for(;i<sz;)
    {
        if(s[i++]=='o')
        {
            arr[key++]=1;
            break;
        }
    }

    for(i=0;i<5;i++)
    {
        if(arr[i]!=1)
        {
            cout<<"NO"<<endl;
            key=0;
            break;
        }
    }
    if(key==5)cout<<"YES"<<endl;


}
