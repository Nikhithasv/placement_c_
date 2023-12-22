#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        int start = i;
        int space = n - i;  
        for (int j = 1; j <= space; j++) {
            printf("  ");  
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", start);
            start += 2;
        }

        printf("\n");
    }

    return 0;
}
