#include <stdio.h>

int main() {
    int size, i, j, k;
    
    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Read the elements of the array
    int arr[size];
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Create a new array to store the unique elements
    int unique[size];
    int isDuplicate;
    int uniqueSize = 0;
    
    // Traverse the original array
    for (i = 0; i < size; i++) {
        // Check if the element is already present in the new array
        isDuplicate = 0;
        for (j = 0; j < uniqueSize; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        // If it is not a duplicate, add it to the new array
        if (!isDuplicate) {
            unique[uniqueSize] = arr[i];
            uniqueSize++;
        }
    }
    
    // Print the unique elements
    printf("Array with duplicate elements removed: ");
    for (k = 0; k < uniqueSize; k++) {
        printf("%d ", unique[k]);
    }
    
    return 0;
}
