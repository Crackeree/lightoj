#include<cstdio>
#include<math.h>
using namespace std;
int main()

{
    int t;
    while(1==scanf("%d",&t)){
            int i = 0;
            while(t--){
    long long int  n , root,sq,r , pair_[2];
    scanf("%lld",&n);
    if(n==2){pair_[0]=1;pair_[1]=2;}
    else if(n==3){pair_[0]=2;pair_[1]=2;}
    else{
    root = sqrtl(n);
    sq = root*root;
    ///printf("%lld %lld\n",root,sq);
    r = n%sq;
    if(r==0)r=sq;
    if(root%2)
    {
        if(n==sq)pair_[0]=1;
        else if(r>=1 && r<=root)pair_[0]=r;
        else pair_[0]=root+1;

        if(n==sq)pair_[1]=root;
        else if(r>=1 && r<=root+1)pair_[1]=root+1;
        else pair_[1]=2*(root+1)-r;



    }
    else{
        if(n==sq)pair_[0]=root;
        else if(r>=1 && r<=root+1)pair_[0]=root+1;
        else pair_[0]=2*(root+1) - r;

        if(n==sq)pair_[1]=1;
        else if(r>=1 && r<=root)pair_[1]=r;
        else pair_[1]=root+1;
    }
    }

    printf("Case %d: %lld %lld\n",++i,pair_[0],pair_[1]);
    }
    }
}
