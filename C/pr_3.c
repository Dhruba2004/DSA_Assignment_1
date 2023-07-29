#include <stdio.h>

void space(int n, int i) {
    for (int j = 1; j <= n - i; j++) {
        printf(" ");
    }
}

int main() {
    int n = 4;
    int c = 1;
    for (int i = 1; i <= n; i++) {
        space(n, i);
        for (int j = 1; j <= i; j++) {
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }

    return 0;
}
