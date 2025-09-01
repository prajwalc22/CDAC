#include <stdio.h>

struct area
{
    int length;
    int breadth;
};
int main()
{
    struct area a;

    scanf("%d %d", &a.length, &a.breadth);
    printf("The area of rectangle is : %d", a.length * a.breadth);
}