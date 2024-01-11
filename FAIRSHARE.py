t = int(input())
for i in range(t):
    n, k = input().split()
    n = int(n)
    k = int(k)
    pp = n // (k+1)
    rem = n - (pp*k)
    print(rem)
    
