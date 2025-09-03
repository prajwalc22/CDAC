#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev; // Additional pointer for previous node
};
struct Node *head = NULL;

void insertAtBegining(int data)
{
    // Create new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL; // First node has no previous

    // If list is not empty, update previous of old head
    if (head != NULL)
        head->prev = newNode;

    // Update head to point to new node
    head = newNode;
    printf("Node with data %d inserted at beginning\n", data);
}

void insertAtEnd(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    // If list is empty
    if (head == NULL)
    {
        head = newNode;
        printf("Node with data %d inserted at end\n", data);
        return;
    }

    // Traverse to the end
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Link the new node
    temp->next = newNode;
    newNode->prev = temp;
    printf("Node with data %d inserted at end\n", data);
}

void insertAtPosition(int data, int position)
{
    // If position is 0, insert at beginning
    if (position == 0)
    {
        insertAtBegining(data);
        return;
    }

    // Create new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    // Traverse to the position before where we want to insert
    struct Node *temp = head;
    for (int i = 0; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Check if position is valid
    if (temp == NULL)
    {
        printf("Position %d is out of bounds\n", position);
        free(newNode);
        return;
    }

    // Insert the new node
    newNode->next = temp->next;
    newNode->prev = temp;

    // Update next node's previous pointer if it exists
    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;

    printf("Node with data %d inserted at position %d\n", data, position);
}

int search(int value)
{
    struct Node *temp = head;
    int position = 0;

    // Check if list is empty
    if (temp == NULL)
    {
        printf("List is empty\n");
        return -1;
    }

    // Traverse the list to find the value
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

    // Value not found
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

    // If only one node
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("Last node deleted\n");
        return;
    }

    // Traverse to the last node
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Update the second last node's next pointer
    temp->prev->next = NULL;
    free(temp);
    printf("Node deleted from end\n");
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

    if (head != NULL)
        head->prev = NULL;

    free(temp);
    printf("Node deleted from beginning\n");
}

void deleteAtPosition(int position)
{
    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if (position == 0)
    {
        deleteAtBeginning();
        return;
    }

    struct Node *temp = head;
    for (int i = 0; i < position && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position %d is out of bounds\n", position);
        return;
    }

    // Update links
    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    printf("Node at position %d deleted\n", position);
}

void Display()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Forward: ");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void DisplayReverse()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    // First go to the last node
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Now traverse backwards
    printf("Reverse: ");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
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
