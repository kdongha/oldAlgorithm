N=int(input())
min_num=1000000
max_num=2
input_list=list(map(int,input().split()))
for item in input_list:
    min_num=min(item,min_num)
    max_num=max(item,max_num)
print(min_num*max_num)