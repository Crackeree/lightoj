#include<iostream>
#include<cstdio>
#include<vector>
#include<set>

using namespace std;
int main()

{
    int t , n , q ,temp,k=0;
    vector <int> vec;

    while(1==scanf("%d",&t))
    {
       vec.clear();
       printf("Case %d:\n",++k);
        while(t--)
        {
            scanf("%d %d",&n,&q);
           int i=0;

           while(n--)
           {
               scanf("%d",&temp);
               vec.push_back(temp);
               i++;
           }
           int z = vec.size();
///vector <int> cpy(vec1.begin(),vec1.end());
           while(q--)
           {
///vector <int >vec2(cpy.begin(),cpy.end());
               int a ,b ;
               scanf("%d %d",&a,&b);

               ///int z = vec.size();
               int low=0 , high=i-1 , low_ind , up_ind , mid=(low+high)/2;

               for(;(mid!=i-1 &&( vec[mid]>b || vec[mid+1]<=b) && high>=low );)
               {
                   mid = (high+low)/2;

                   if(vec[mid]>b)high = mid -1;
                   else if(vec[mid]<b)low = mid +1;
                   else if( mid != i-1 &&  vec[mid]<=b && vec[mid+1]>b) break;



               }
                up_ind = mid;
               high = mid ;
               low = 0;
               mid = (high+low)/2;
                for(;(mid!=0 &&(vec[mid]<a || vec[mid-1]>=a ) && high>=low );)
               {
                   mid = (high+low)/2;
                   cout<<"mid:\n"<<mid<<endl;

                   if(vec[mid]>a)high = mid -1;
                   else if(vec[mid]<a)low = mid +1;
                   else if(mid!=0 && vec[mid]<a || vec[mid-1]>a ) break;



               }
                 low_ind = mid;

               //for(int j=0;j<z;j++)cout<<vec[j]<<endl;
               cout<<low_ind<<" "<<up_ind<<endl;
               ///if(z==i+2)printf("%d\n",up_ind - low_ind-1);
               ///else if(z==i+1)printf("%d\n",up_ind - low_ind);
               ///else if(z==i) printf("%d\n",up_ind - low_ind +1);
               ///st.clear();
               ///vec.clear();
               ///vec2.clear();


           }
           ///cpy.clear();

        }
    }






}
