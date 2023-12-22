#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    int screenlength;
    int extra;
    int wordspace;
    int remaining;

    printf("Enter the sentence: ");
    scanf(" %[^\n]", s1);  // Read the entire sentence with spaces

    printf("Enter the screen length: ");
    scanf("%d", &screenlength);

    int len = strlen(s1);
    int space = 0;

    for (int i = 0; i < len; i++) {
        if (s1[i] == ' ') {
            space++;
        }
    }

    extra = screenlength - len + space;
    wordspace = extra / space;
    remaining = extra % space;

    for (int i = 0; i < len; i++) {
        if (s1[i] == ' ') {
            for (int j = 0; j < wordspace; j++) {
                printf("*");
            }

            if (remaining > 0) {
                printf("*");
                remaining--;
            }
        } else {
            printf("%c", s1[i]);
        }
    }

    printf("\n");

    return 0;
}
