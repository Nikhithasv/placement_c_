#include <stdio.h>

int main()
{   
    int array[12];
    int n = 12;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int count = 1; 
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++; 
            }
            else
            {
                break; 
            }
        }
        if (count > 1)
        {
            printf("%d -> %d, ", array[i], count);
            i += count - 1;
        }
    }

    return 0;
}
