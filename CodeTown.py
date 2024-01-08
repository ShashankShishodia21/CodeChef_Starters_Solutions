def main():
    t = int(input())
    while t > 0:
        s = input().strip()
        if (s[1] in "AEIOU" and s[3] in "AEIOU" and s[5] in "AEIOU" and
                s[0] not in "AEIOU" and s[2] not in "AEIOU" and
                s[4] not in "AEIOU" and s[6] not in "AEIOU" and s[7] not in "AEIOU"):
            print("YES")
        else:
            print("NO")
        t -= 1

if __name__ == "__main__":
    main()
