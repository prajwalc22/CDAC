#include <stdio.h>

int main()
{

    int arr[6] = {2, 30, 56, 6, 1, 12};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    // printf("Hello");
}