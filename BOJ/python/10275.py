def binarysearch(min,max,ans):
    half=(max+min)//2
    if half==ans:
        return 1
    elif half<ans:
        return 1+binarysearch(half,max,ans)
    else:
        return 1+binarysearch(min,half,ans)

for i in range(int(input())):
    n,a,b=map(int,input().split())
    print(binarysearch(0,2**n,a))