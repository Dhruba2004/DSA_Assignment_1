#include <stdio.h>

int findFrequency(int arr[], int n, int k) {
    int frequency = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            frequency++;
        }
    }
    return frequency;
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &k);

    int frequency = findFrequency(arr, n, k);
    printf("Frequency of %d is %d\n", k, frequency);

    return 0;
}
