#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void insertAtBegining(int data)
{
    // create new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    // fill in the data
    newNode->data = data;
    newNode->next = head;
    // head to point to new node
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
        printf("List is Empty \n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    struct Node *temp = head;
    while (temp->next->next != NULL)
    {

        temp = temp->next;
        // free(temp->next);
        temp->next = NULL;
    }
}
void Display()
{
    // makek a copy of head
    struct Node *temp = head;
    // check if list is empty
    if (temp == NULL)
    {
        printf("list is empty\n");
        return;
    }
    // if list is not empty,traverse the list
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next; // update the temp to point to the next node
    }
    printf("NULL\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("enter choice:\n");
        printf("1st: Insert at Begening \n");
        printf("2nd: Insert at End \n");
        printf("3rd: Insert at position \n");
        printf("4th: Display the linkedlist  \n");
        printf("5: Exit.\n");
        printf("6: Search a value:\n");
        printf("7: Delete at End\n");
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
            exit(0);
            break;
        case 6:
            // int value;
            // printf("Enter a data to search");
            // scanf("%d", &value);
            search(3000);
            break;
        case 7:
            deleteAtEnd(); // New case
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
