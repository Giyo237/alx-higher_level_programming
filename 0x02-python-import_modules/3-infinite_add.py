#!/usr/bin/python3

def add(arg):
    n = len(arg) - 1
    if n == 0:
        print("{:d}".format(n))
        return
    else:
        i = 1
        total = 0
        while i <= n:
            total += int(arg[i])
            i += 1
        print("{:d}".format(total))


if __name__ == "__main__":
    import sys
    add(sys.argv)
