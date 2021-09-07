import sys
import math


def generate(login):
    return abs(4567*math.prod([ord(c) for c in login])) % 94929


if __name__ == '__main__':

    if len(sys.argv) < 2:
        print("Usage: glozz-cracker <login>")
        sys.exit(1)

    login = sys.argv[1]
    password = generate(login)

    print(password)
