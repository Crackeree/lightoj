#include<bits/stdc++.h>
using namespace std ;

int main()
{
        int t,i;
        vector <int> vec;

        while(1==scanf("%d",&t)){
        i=1;
        while(t--)
        {
            bool a = false;
            double p , l , c , q ;
            scanf("%lf %lf",&p,&l);
            c=0;

            printf("Case %d:",i++);
            int y=p-l, z = sqrt(y);
            if(y<=l)printf(" impossible\n");
            else{
            while(z>=++c){
            q = (y)/c ;
            if(q>l  && q==(int)q )
            {
                if(c>l)
                printf(" %d",(int)c);
                if(z!=c || q == 2 || q==3)
                vec.push_back((int)q);
                a=true;

            }
        }

        reverse(vec.begin(),vec.end());
        int j=0;
        if(a==false)printf(" impossible");
        else{
                z=vec.size();
        while(z--)printf(" %d",vec[j++]);


        }
        printf("\n");
        vec.clear();
    }
        }
        }


return 0;





}

