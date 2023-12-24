#include <stdio.h>

int *occurance(int arr[], int n, int k)
{
    static int result[2] = {-1, -1}; 
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            if (result[0] == -1)
                result[0] = i;
            result[1] = i;
        }
    }

    return result;
}

int main()
{
    int n, k;
    int arr[100];
    printf("enter the number of elements: ");
    scanf("%d", &n);
    printf("enter the X value: ");
    scanf("%d", &k);
    printf("enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *result = occurance(arr, n, k);

    for (int i = 0; i < 2; i++)
    {
        printf(" found at %d ", result[i]);
    }

    return 0;
}

