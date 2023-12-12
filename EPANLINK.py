
import sys

num_test_cases = int(input())

for i in range(num_test_cases):
    

    N = int(input())

    officers = 20
    x = N // officers
    unprocessed = N % officers

    print(unprocessed)
    print()
