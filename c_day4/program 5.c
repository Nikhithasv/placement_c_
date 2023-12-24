#include <stdio.h>

int sum(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                return 1;  
            }
        }
    }
    return 0;  
}

int main() {
    int x, n;
    int arr[100];
    
    printf("enter n: ");
    scanf("%d", &n);
    printf("enter x: ");
    scanf("%d", &x);
    
    printf("enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int flag = sum(arr, n, x); 
    
    if (flag) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
