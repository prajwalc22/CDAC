#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10, b = 20, c = 30, d = 40, e = 40;
    int arr[5] = {a, b, c, d, e};
    int *ptr[5] = {&a, &b, &c, &d, &e};

    ptr[0] = &a;

    printf("%d\n", *(*(ptr)));

    printf("%d\n", *(*(ptr + 1)));

    printf("%d\n", *(*(ptr + 2)));
    printf("%d\n", *(*(ptr + 3)));
    printf("%p\n", (ptr[0]));
    printf("%p\n", (ptr[1]));
    printf("%p\n", (ptr[2]));
    printf("%p\n", (ptr[3]));
}