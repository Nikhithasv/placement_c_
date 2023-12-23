#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[100];
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int result[n+1];  

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] < 9) {
            a[i] = a[i] + 1;
            for (int j = 0; j < n; j++) {
                printf("%d ", a[j]);
            }
            break;  
        } else {
            if (a[i] == 9) {
                a[i] = 0;
                result[0] =a[0]+1;
                result[i] = 0;
                for (int j = 0; j < n; j++) {
                    printf("%d ", result[j]);
                }
               break;  
            }
        }
    }

    return 1;
}
