#include <stdio.h>

int main() {
    int n, m;
    int i = 0, j = 0;
    int arr1[100], arr2[100];
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
     
     
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n) {
        printf("%d ", arr1[i]);
        i++;
    }

    while (j < m) {
        printf("%d ", arr2[j]);
        j++;
    }

    
    return 0;
}
