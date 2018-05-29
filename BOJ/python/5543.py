burger=int(input())
for i in range(2):
    temp=int(input())
    burger=burger if burger<temp else temp

drink=int(input())
temp=int(input())
drink = drink if drink < temp else temp

print(burger+drink-50)