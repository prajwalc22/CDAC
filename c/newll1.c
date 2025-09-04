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
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int data, int position)
{
    if (position == 0)
    {
        insertAtBegining(data);
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    struct Node *temp = head;
    for (int i = 0; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position %d is out of bounds\n", position);
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    printf("Node with data %d inserted at position %d\n", data, position);
}

int search(int value)
{
    struct Node *temp = head;
    int position = 0;

    if (temp == NULL)
    {
        printf("List is empty\n");
        return -1;
    }

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("Value %d found at position %d\n", value, position);
            return position;
        }
        temp = temp->next;
        position++;
    }

    printf("Value %d not found in the list\n", value);
    return -1;
}

void deleteAtEnd()
{
    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    // If there's only one node
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("Last node deleted. List is now empty.\n");
        return;
    }

    // Traverse to the second-to-last node
    struct Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    // Free the last node and update the pointer
    free(temp->next);
    temp->next = NULL;
    printf("Node deleted from end.\n");
}

void deleteAtBeginning()
{
    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;
    free(temp);
    printf("Node deleted from beginning.\n");
}

void Display()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n=== LINKED LIST OPERATIONS ===\n");
        printf("1: Insert at Beginning\n");
        printf("2: Insert at End\n");
        printf("3: Insert at Position\n");
        printf("4: Display the LinkedList\n");
        printf("5: Exit\n");
        printf("6: Search a Value\n");
        printf("7: Delete at End\n");
        printf("8: Delete at Beginning\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertAtBegining(2000);
            break;
        case 2:
            insertAtEnd(3000);
            break;
        case 3:
            insertAtPosition(7000, 3);
            break;
        case 4:
            Display();
            break;
        case 5:
            printf("Exiting program...\n");
            exit(0);
            break;
        case 6:
            search(3000);
            break;
        case 7:
            deleteAtEnd();
            break;
        case 8: 
            deleteAtBeginning();
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
