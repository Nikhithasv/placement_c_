#include <stdio.h>


int main() {
    int n;
    int result[100];
    int size = 0;
    int arr[100];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                int found = 0;
                for (int k = 0; k < size; k++) {
                    if (result[k] == arr[j]) {
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    result[size++] = arr[j];
                }
            }
        }
    }

    if (size == 0) {
        result[0] = -1;
        size = 1;
    } else {
        
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (result[i] > result[j]) {
                    int temp = result[i];
                    result[i] = result[j];
                    result[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
