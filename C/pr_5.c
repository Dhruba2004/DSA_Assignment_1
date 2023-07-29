#include <stdio.h>

void insert_element(int arr[], int *size, int element, int k) {
    int i;

    // Shift elements to the right to make space for the new element
    for (i = *size - 1; i >= k; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the given location
    arr[k] = element;

    // Increment the size of the array
    (*size)++;
}

int main() {
    int my_array[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int new_element = 6;
    int insert_location = 2;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    insert_element(my_array, &size, new_element, insert_location);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}
