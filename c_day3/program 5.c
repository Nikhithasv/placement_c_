#include <stdio.h>
#include <string.h>

int main() {
    char s[100][100];
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    int min = 100;
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", s[i]);

        int len = strlen(s[i]);
        if (len < min) {
            min = len;
        }
    }

    char prefix[100];
    int index = 0;

    for (int i = 0; i < min; i++) {
        char current = s[0][i];

        for (int j = 1; j < n; j++) {
            if (i >= strlen(s[j]) || s[j][i] != current) {
                prefix[index] = '\0';
                printf("Longest Common Prefix: %s\n", prefix);
                return 0;
            }
        }

        prefix[index++] = current;
    }

    prefix[index] = '\0';
    printf("Longest Common Prefix: %s\n", prefix);

    return 0;
}
