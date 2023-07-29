#include <stdio.h>

int main() {
    int i, j, c = 1;
    char ch;
    
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if (c % 2 == 0)
                ch = '#';
            else
                ch = '*';
                
            printf("%c", ch);
            c = c + 1;
        }
        printf("\n");
    }
    
    return 0;
}
