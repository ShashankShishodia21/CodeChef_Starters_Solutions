from collections import Counter
for _ in range(int(input())): 
    n=int(input())
    a=list(map(int,input().split()))
    a=dict(Counter(a)) 
    print(n-max(a.values()))
