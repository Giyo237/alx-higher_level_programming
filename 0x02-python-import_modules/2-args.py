#!/usr/bin/python3
if __name__ == "__main__":
    import sys

argu = sys.argv
n = len(argu) - 1
if n > 1:
    print("{} arguments:".format(n))
    for i in range(1,n + 1):
        print("{}: {}".format(i, argu[i]))
elif n == 0:
    print("{} arguments.".format(n))
else:
    print("{} argument:".format(n))
    print("{}: {}".format(n, argu[1]))
