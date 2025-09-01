#include <stdio.h>

struct addition
{
    int num1;
    int num2;
};
int main()
{
    struct addition ad;

    scanf("%d %d", &ad.num1, &ad.num2);
    printf("The sum of num1 and num2 is: %d", ad.num1 + ad.num2);
}