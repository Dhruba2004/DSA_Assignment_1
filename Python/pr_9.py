def find_frequency(arr, k):
    frequency = 0
    for element in arr:
        if element == k:
            frequency += 1
    return frequency

def main():
    n = int(input("Enter the size of the array: "))
    arr = []
    print("Enter the elements of the array:")
    for _ in range(n):
        arr.append(int(input()))

    k = int(input("Enter the number to find its frequency: "))

    frequency = find_frequency(arr, k)
    print(f"Frequency of {k} is {frequency}")

if __name__ == "__main__":
    main()
