value = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white']
first = input()
second = input()
third = input()
print((value.index(first) * 10 + value.index(second)) * (10 ** value.index(third)))
