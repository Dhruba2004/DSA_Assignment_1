#!/bin/python3

"""
   A
  B B
 C C C
D D D D
"""

def space(n, i):
    for j in range(1, n + 1 - i):
        print(" ", end="")

def main():
    n = 4
    for i in range(1, n + 1):
        space(n, i)
        for j in range(1, i + 1):
            print(chr(i + 64), end=" ")
        print()

if __name__ == "__main__":
    main()
