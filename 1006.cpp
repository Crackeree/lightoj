#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int a, b, c, d, e, f;
int dp[10000+5];
int fn( int n ) {
    if( n == 0 ) return dp[n]=a;
    if( n == 1 ) return dp[n]=b;
    if( n == 2 ) return dp[n]=c;
    if( n == 3 ) return dp[n]=d;
    if( n == 4 ) return dp[n]=e;
    if( n == 5 ) return dp[n]=f;
    if(dp[n]==-1)
    return dp[n]=( fn(n-1)% 10000007 + fn(n-2)% 10000007 + fn(n-3)% 10000007 + fn(n-4)% 10000007 + fn(n-5)% 10000007 + fn(n-6)% 10000007 )% 10000007;
    else return dp[n];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {

        memset(dp,-1,sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);

    }
    return 0;
}
