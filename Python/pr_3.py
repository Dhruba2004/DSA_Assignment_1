"""
   1
  2 3
 4 5 6
7 8 9 10
"""

def space(n, i):
    for j in range(1, n + 1 - i):
        print(" ", end="")

def main():
    n, c = 4, 1
    for i in range(1, n + 1):
        space(n, i)
        for j in range(1, i + 1):
            print(c, end=" ")
            c += 1
        print()

if __name__ == "__main__":
    main()
