#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , j , count;
    while(1==scanf("%d",&t))
    {
        j=0;
        while(t--)
        {



    int n , p , q ;
    cin>>n>>p>>q;
    int i = 0 , arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+n);
    if(n<p)
    {
        i=0,count = 0;
        while(1)
        {
            q-=arr[i];
            if(q>=0 && arr[i]>0)count++;
            else break;
            i++;
        }
        cout<<"Case "<<++j<<": "<<count<<endl;
    }
    else{

    int sum = 0;
    i=0;
    count = 0;
    while(1)
    {
        if(sum<q && sum!=q && i<p)
        {
            sum+=arr[i];
        }
        else break;
        i++;
        if(arr[i]>0)
        count++;

    }
        if(sum>q)i--;



        cout<<"Case "<<++j<<": "<<count<<endl;

    }



   }

}


}
