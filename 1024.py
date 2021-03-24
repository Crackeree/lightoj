import sys
def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)
t = int(input())
cases=0
while t!=0:
    n = int(input())
    L =1
    s = input()
    s = s.split()
    for i in range(1,n):
        a = int(s[i])
        temp = a*L
        temp/=gcd(L,a)
        L=temp
    cases = cases+1
    print("Case ",cases,": ",int(L),"\n")

