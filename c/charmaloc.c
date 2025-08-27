#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *arr;
    int n;
    scanf("%d", &n);
    arr = (char *)malloc(sizeof(char) * n);

    if (arr == NULL)
    {
        printf("allocation failed");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = i + '1';
        printf("%p\n", *(arr + i));
    }

    free(arr);
    return 0;
}