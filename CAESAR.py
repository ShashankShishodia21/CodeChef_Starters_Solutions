# cook your dish here
def rotate_string(string, k):
    rotated_string = ""
    for char in string:
        if char.isalpha():
            ascii_offset = ord('a') if char.islower() else ord('A')
            rotated_char = chr((ord(char) - ascii_offset + k) % 26 + ascii_offset)
            rotated_string += rotated_char
        else:
            rotated_string += char
    return rotated_string


def find_rot_k_cipher(q):
    for _ in range(q):
        n = int(input())
        s = input().strip()
        t = input().strip()
        u = input().strip()

        k = (ord(t[0]) - ord(s[0])) % 26

        rot_k_cipher = rotate_string(u, k)
        print(rot_k_cipher)


# Read the number of queries
num_queries = int(input())

# Solve the problem
find_rot_k_cipher(num_queries)
