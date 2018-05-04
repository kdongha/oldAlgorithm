def Rev(a):
    return int(str(a)[::-1])
X,Y=map(int,input().split())
print(Rev(Rev(X)+Rev(Y)))