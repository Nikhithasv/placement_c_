#include <stdio.h>

int main() {
    char a[10][50];
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", a[i]);
    }

    for (i = 0; i < 10; i++) {
        char c;
        int count;

        for (j = 0; a[i][j] != '\0'; j++) {
            c = a[i][j];

            if (isalpha(c)) {
                printf("%c", c);
            } else if (isdigit(c)) {
                count = c - '0';

                for (int k = 0; k < count; k++) {
                    printf("%c", a[i][j - 1]);
                }
            }
        }

        printf("\n");
    }

    return 0;
}
