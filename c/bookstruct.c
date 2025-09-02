#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char title[100];
    char author[100];
    float price;
};

int main()
{
    struct Book *ptr = (struct Book *)malloc(sizeof(struct Book));
    if (ptr == NULL)
        return 1;

    strcpy(ptr->title, "The Great Gatsby");
    strcpy(ptr->author, "F. Scott Fitzgerald");
    ptr->price = 299.99;

    printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", ptr->title, ptr->author, ptr->price);

    free(ptr);
    return 0;
}
