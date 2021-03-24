#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(1==scanf("%d",&t)){
    int cases=0;
    getchar();
    while(t--)
    {
        int arr[300]= {0};
        string s1,s2;


        getline(cin,s1);
        getline(cin,s2);
        //cout<<s1<<endl;
        //cout<<s2<<endl;



            for(int i=0; i<s1.size();i++)
            {
                if(s1[i]!=' ')
                {
                    if(s1[i]>=65 && s1[i]<=90)
                    {
                        arr[s1[i]]++;
                        arr[s1[i]+32]++;
                    }
                    else{
                        arr[s1[i]]++;
                        arr[s1[i]-32]++;
                    }
                }

            }
            bool b=0;
            for(int i=0;i<s2.size();i++)
            {   if(s2[i]!=' '){
                if(s2[i]>=65 && s2[i]<=90)
                    {
                        if(arr[s2[i]]>0){
                            arr[s2[i]]--;
                            arr[s2[i]+32]--;
                        }
                        else {b=1;printf("Case %d: No\n",++cases);break;}
                    }
                    else{
                        if(arr[s2[i]]>0){
                            arr[s2[i]]--;
                            arr[s2[i]-32]--;
                        }
                        else {b=1;printf("Case %d: No\n",++cases);break;}
                    }
            }
            }
            if(b)continue;
            for(int i=65;i<=90;i++)
            {
                if(arr[i]==0);
                else {b=1;printf("Case %d: No\n",++cases);break;}
            }
            if(b)continue;
            for(int i=97;i<=122;i++)
            {
                if(arr[i]==0);
                else {b=1;printf("Case %d: No\n",++cases);break;}
            }
            if(b==0)printf("Case %d: Yes\n",++cases);
        }
    }

}
