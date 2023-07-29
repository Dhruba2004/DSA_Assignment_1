N = int(input("Enter the value of N: "))

sum = 0
for i in range(1, N+1):
    term = i * i
    sum += term

print("Summation up to the", N, "th term:", sum)

