def gcd(a,b):
    while b!=0:
        if b > a:
            a, b = b, a
        if b!=0:
            a,b=b,a%b
    return a

A,B=map(int,input().split())
print(A*B//gcd(A,B))
