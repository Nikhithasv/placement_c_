#include <stdio.h>
#include <string.h>

int main() {
    char d[100];

    printf("Enter digits: ");
    scanf("%s", d);

    if (strlen(d) == 0) {
        printf("Output: []\n");
        return 0;
    }

    char* l[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    int c = 1;
    for (int i = 0; i < strlen(d); i++) {
        int v = d[i] - '0';
        if (v >= 2 && v <= 9) {
            c *= strlen(l[v]);
        }
    }

    char r[c][strlen(d) + 1];

    for (int i = 0; i < c; i++) {
        int x = i;
        for (int j = 0; j < strlen(d); j++) {
            int v = d[j] - '0';
            int n = strlen(l[v]);
            r[i][j] = l[v][x % n];
            x /= n;
        }
        r[i][strlen(d)] = '\0';
    }

    printf("Output: [");
    for (int i = 0; i < c; i++) {
        printf("\"%s\"", r[i]);
        if (i < c - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
