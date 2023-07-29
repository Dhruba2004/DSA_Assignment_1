#include <stdio.h>

void space(int n, int i) {
    for (int j = 1; j <= n - i; j++) {
        printf(" ");
    }
}

void main() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        space(n, i);
        for (int j = 1; j <= i; j++) {
            printf("%c ", i + 64);
        }
        printf("\n");
    }
}
