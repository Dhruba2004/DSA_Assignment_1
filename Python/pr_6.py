def delete_element(arr, element):
    if element in arr:
        arr.remove(element)
        return True
    else:
        return False

# Example usage:
my_array = [1, 2, 3, 4, 5]
print("Original array:", my_array)

element_to_delete = 3
deleted = delete_element(my_array, element_to_delete)

if deleted:
    print("Element", element_to_delete, "deleted.")
    print("Updated array:", my_array)
else:
    print("Element", element_to_delete, "not found in the array.")
    print("Array remains unchanged:", my_array)
