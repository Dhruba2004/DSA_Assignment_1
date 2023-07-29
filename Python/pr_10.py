def merge_arrays(arr1, arr2):
    m, n = len(arr1), len(arr2)
    i, j, k = 0, 0, 0
    merged_array = [0] * (m + n)

    while i < m and j < n:
        if arr1[i] < arr2[j]:
            merged_array[k] = arr1[i]
            i += 1
        else:
            merged_array[k] = arr2[j]
            j += 1
        k += 1

    while i < m:
        merged_array[k] = arr1[i]
        i += 1
        k += 1

    while j < n:
        merged_array[k] = arr2[j]
        j += 1
        k += 1

    return merged_array

def main():
    m = int(input("Enter the size of the first array (M): "))
    arr1 = []
    print("Enter the elements of the first array in sorted order:")
    for _ in range(m):
        arr1.append(int(input()))

    n = int(input("Enter the size of the second array (N): "))
    arr2 = []
    print("Enter the elements of the second array in sorted order:")
    for _ in range(n):
        arr2.append(int(input()))

    merged_array = merge_arrays(arr1, arr2)

    print("Merged array in sorted order:")
    print(*merged_array)

if __name__ == "__main__":
    main()
