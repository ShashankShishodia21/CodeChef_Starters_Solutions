import sys
t = int(input())
for i in range(t):
    x, y = map(int, input().split())
    if((x**4) + 4 * (y**2) == 4 * (x**2) * y):
        print("yes")
        
    else:
        print("no")
            
        
