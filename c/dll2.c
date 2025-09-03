#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;

void insertAtBegining(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL; // first node has no previous

    // if list is not empty, update previous of old head

    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
    printf("Node with data %d inserted at beginning\n", data);
}

void insertAtEnd(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL)
    {
        head = newNode;
        printf("Node with data %d inserted at end\n", data);
        return;
    }

    // traverse to the end
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // link the new node
    temp->next = newNode;
    newNode->prev = temp;
    printf("Node with data %d inserted at end\n", data);
}

void deleteAtBegining()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = head;
    head = head->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
    free(temp);
    printf("Node deleted from beginning\n");
}
int main()
{
}