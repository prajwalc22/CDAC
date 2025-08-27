#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ch[7];
    for (int i = 0; i < 7; i++)
    {
        ch[i] = (char *)malloc(10);
    }

    for (int i = 0; i < 7; i++)
    {
        scanf("%s", ch[i]);
        getchar();
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", ch[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        free(ch[i]);
    }
}