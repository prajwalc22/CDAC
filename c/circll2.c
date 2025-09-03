#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void insertAtBegining(int data)
{
    // Create new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    // If list is empty
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head; // Points to itself
        printf("Node with data %d inserted at beginning\n", data);
        return;
    }

    // Find the last node
    struct Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    // Insert at beginning
    newNode->next = head;
    temp->next = newNode; // Last node points to new head
    head = newNode;
    printf("Node with data %d inserted at beginning\n", data);
}

void Display()
{
    if (head == NULL)
    {
        printf("list is empty\n");
        return;
    }

    struct Node *temp = head;

    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to %d)\n", head->data);
}
int main()
{
    int choice, data, position;
    while (1)
    {
        printf("\nEnter choice:\n");
        printf("1: Insert at Beginning\n");
        printf("2: Insert at End\n");
        printf("3: Insert at Position\n");
        printf("4: Display Forward\n");
        printf("5: Display Reverse\n");
        printf("6: Search a Value\n");
        printf("7: Delete at End\n");
        printf("8: Delete at Beginning\n");
        printf("9: Delete at Position\n");
        printf("10: Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtBegining(data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &position);
            insertAtPosition(data, position);
            break;
        case 4:
            Display();
            break;
        case 5:
            DisplayReverse();
            break;
        case 6:
            printf("Enter value to search: ");
            scanf("%d", &data);
            search(data);
            break;
        case 7:
            deleteAtEnd();
            break;
        case 8:
            deleteAtBeginning();
            break;
        case 9:
            printf("Enter position to delete: ");
            scanf("%d", &position);
            deleteAtPosition(position);
            break;
        case 10:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}