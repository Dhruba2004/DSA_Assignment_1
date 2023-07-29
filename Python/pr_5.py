def insert_element(arr, element, k):
    arr.append(None)  # Add a placeholder element at the end

    # Shift elements to the right to make space for the new element
    for i in range(len(arr) - 1, k, -1):
        arr[i] = arr[i - 1]

    # Insert the new element at the given location
    arr[k] = element

    return arr

my_array = [1, 2, 3, 4, 5]
new_element = 6
insert_location = 2

print("Original array:", my_array)

updated_array = insert_element(my_array, new_element, insert_location)

print("Array after insertion:", updated_array)
