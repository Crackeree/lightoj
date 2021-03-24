#include<bits/stdc++.h>
using namespace std;
int main()
{


    //freopen("output.txt","w",stdout);
    map<string,int>mp;
    mp["January"]=1;
    mp["February"]=2;
    mp["March"]=3;
    mp["April"]=4;
    mp["May"]=5;
    mp["June"]=6;
    mp["July"]=7;
    mp["August"]=8;
    mp["September"]=9;
    mp["October"]=10;
    mp["November"]=11;
    mp["December"]=12;

    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        string first_month; int first_day ; int first_year;
        cin>>first_month;
        scanf("%d, %d",&first_day,&first_year);

        string second_month; int second_day ; int second_year;
        cin>>second_month;
        scanf("%d, %d",&second_day,&second_year);

        if(mp[first_month]>2)first_year++;
        if(mp[second_month]<2)second_year--;

        if(mp[second_month]==2)
        {
            if(second_day<29)second_year--;
        }

        if(first_year<=second_year){

        int d4 = (second_year/4) - ((first_year-1)/4);
        int d100 = (second_year/100) - ((first_year-1)/100);
        int d400 = (second_year/400) - ((first_year-1)/400);

        int ans = d4 - d100 + d400;
        printf("Case %d: %d\n",i,ans);
        }
        else{
            printf("Case %d: %d\n",i,0);
        }



    }
}
