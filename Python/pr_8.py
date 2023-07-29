def main():
    arr = [1, 2, 3, 4, 5, 6]
    max_val = float('-inf')  # Initialize max to negative infinity
    second_max_val = float('-inf')  # Initialize second max to negative infinity

    for element in arr:
        if element > max_val:
            second_max_val = max_val  # Move the previous max to second_max_val
            max_val = element  # Update max to the new max element
        elif element > second_max_val and element != max_val:
            second_max_val = element  # Update second_max_val to the new second largest element

    print(f"{second_max_val} is the second largest element")

if __name__ == "__main__":
    main()
