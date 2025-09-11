#include <stdio.h>
int main()
{

    int arr[6] = {5, 6, 4, 7, 2, 42};
    for (int i = 0; i < 5; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
}