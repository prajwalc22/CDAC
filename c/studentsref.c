#include <stdio.h>
struct student
{
    char name[20]; // 20 bytes
    char gender;   // 1 bytes
    int rollno;    // 4 bytes
    int marks;     // 4 bytes
};
int main()
{
    struct student stu;
    struct student *ptr = &stu;
    struct student *ptr1;
    int n = 5;
    ptr1 = (struct student *)malloc(sizeof(struct student) * n); // malloc (20*5)

    for (int i = 0; i < 5; i++)
    {
        /* code */
    }

    return 0;
}

void display(struct student *ptr)
{
    printf("%s/n", ptr->name);
    printf("%d/n", ptr->rollno);
    printf("%d/n", ptr->marks);
}
