n=int(input())
modn=n%1500000
m=0
n=1
for i in range(2,modn+1):
    m,n=n,(m+n)%1000000
print(n)