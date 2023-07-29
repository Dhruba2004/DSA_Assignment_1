#include <stdio.h>

void mergeArrays(int arr1[], int m, int arr2[], int n, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int m, n;
    printf("Enter the size of the first array (M): ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter the elements of the first array in sorted order:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array (N): ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter the elements of the second array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedSize = m + n;
    int mergedArray[mergedSize];

    mergeArrays(arr1, m, arr2, n, mergedArray);

    printf("Merged array in sorted order:\n");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
