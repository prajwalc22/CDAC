#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    arr = (int *)malloc(sizeof(int) * 5);

    if (arr == NULL)
    {
        printf("allocation failed");
        return 1;
    }
    for (int i = 0; i < 5; i++)
    {
        *(arr + i) = i + 1;
        // printf("%d\n", *(arr + i));
        printf("%p\n", (arr + i));
        printf("%s\n", arr);
    }

    free(arr);
    return 0;
}