#include <stdio.h>

int delete_element(int arr[], int size, int element) {
    int i, j, found = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            found = 1;
            for (j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }
    return found;
}

int main() {
    int my_array[] = {1, 2, 3, 4, 5};
    int size = sizeof(my_array) / sizeof(my_array[0]);
    int element_to_delete = 3;
    int deleted = delete_element(my_array, size, element_to_delete);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    if (deleted) {
        size--; // Update the size of the array after deletion
        printf("Element %d deleted.\n", element_to_delete);
        printf("Updated array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", my_array[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", element_to_delete);
        printf("Array remains unchanged.\n");
    }

    return 0;
}
