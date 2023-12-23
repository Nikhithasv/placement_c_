#include <stdio.h>

int main() {
    char s[100];
    char t[200];
    int n;
    int count = 0;

    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter string s: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &s[i]);
    }
    printf("Enter string t: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &t[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i] == t[j]) {
                count=count+1;
                break;
            }
        }
    }

    if (count == n) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}
