def main():
    # Read the size of the array
    size = int(input("Enter the size of the array: "))

    # Read the elements of the array
    arr = []
    print("Enter the elements of the array: ")
    for _ in range(size):
        arr.append(int(input()))

    # Create a new list to store the unique elements
    unique = []
    
    # Traverse the original list
    for element in arr:
        # Check if the element is already present in the new list
        if element not in unique:
            unique.append(element)

    # Print the unique elements
    print("Array with duplicate elements removed:", unique)

if __name__ == "__main__":
    main()
