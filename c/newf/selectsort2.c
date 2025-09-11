#include <stdio.h>
int main()
{
    int arr[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    for (int i = 0; i < 9; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }

            if (min_index != i)
            {
                int temp = arr[i];
                arr[i] = arr[min_index];
                arr[min_index] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}