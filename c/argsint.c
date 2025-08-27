#include <stdio.h>

#include <stdlib.h>
int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int sum = a + b + c;
    // printf("you have entered %d arguments:\n", argc);
    printf("%d\n", sum);
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("%s\n", argv[i]);
    // }
    return 0;
}
