#include <stdio.h>

int maximum(int arr[], int n)
{    int m1 = arr[0];
     int m2 = arr[1];
    if (n < 2)
    {
        printf("size is less than  2.");
        return -1;  
    }

    if (m2 > m1)
    {
        int temp = m1;
        m1 = m2;
        m2 = temp;
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > m1)
        {
            m2 = m1;
            m1 = arr[i];
        }
        else if (arr[i] > m2 && arr[i] != m1)
        {
            m2 = arr[i];
        }
    }

    return m2;
}

int main()
{
    int n;
    int arr[100];
    printf("enter the number of elements: ");
    scanf("%d", &n);
    printf("enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("second maximum element: %d", maximum(arr, n));

    return 0;
}

