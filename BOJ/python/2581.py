M=int(input())
N=int(input())
prime_list=[True]*(N+1)
prime_list[0]=False
prime_list[1]=False
for i in range(2,N+1):
    if prime_list:
        for j in range(i+i,N+1,i):
            prime_list[j]=False
sum=0
min=0
for i in range(M,N+1):
    if prime_list[i]:
        sum+=i
        if min == 0:
            min = i
if sum>0:
    print(sum)
    print(min)
else:
    print(-1)