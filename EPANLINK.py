
import sys

num_test_cases = int(input())

for i in range(num_test_cases):
    

    # Input value of N
    N = int(input())

    # Number of officers in Chefland
    officers = 20

    # Number of applications each officer would process
    x = N // officers

    # Number of unprocessed applications
    unprocessed = N % officers

    print(unprocessed)
    print()
