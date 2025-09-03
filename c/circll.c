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

void insertAtEnd(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    // If list is empty
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head; // Points to itself
        printf("Node with data %d inserted at end\n", data);
        return;
    }

    // Find the last node
    struct Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    // Insert at end
    temp->next = newNode;
    newNode->next = head; // New last node points to head
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

    // If list is empty and position > 0
    if (head == NULL)
    {
        printf("Position %d is out of bounds (empty list)\n", position);
        return;
    }

    // Create new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    // Traverse to the position before where we want to insert
    struct Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
        // Check if we've completed a full circle
        if (temp == head)
        {
            printf("Position %d is out of bounds\n", position);
            free(newNode);
            return;
        }
    }

    // Insert the new node
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Node with data %d inserted at position %d\n", data, position);
}

int search(int value)
{
    // Check if list is empty
    if (head == NULL)
    {
        printf("List is empty\n");
        return -1;
    }

    struct Node *temp = head;
    int position = 0;

    // Traverse the circular list
    do
    {
        if (temp->data == value)
        {
            printf("Value %d found at position %d\n", value, position);
            return position;
        }
        temp = temp->next;
        position++;
    } while (temp != head);

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
    if (head->next == head)
    {
        free(head);
        head = NULL;
        printf("Last node deleted\n");
        return;
    }

    // Find the second last node
    struct Node *temp = head;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }

    // Delete the last node
    struct Node *lastNode = temp->next;
    temp->next = head; // Second last node now points to head
    free(lastNode);
    printf("Node deleted from end\n");
}

void deleteAtBeginning()
{
    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    // If only one node
    if (head->next == head)
    {
        free(head);
        head = NULL;
        printf("Node deleted from beginning\n");
        return;
    }

    // Find the last node
    struct Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    // Delete the first node
    struct Node *nodeToDelete = head;
    temp->next = head->next; // Last node points to new head
    head = head->next;
    free(nodeToDelete);
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

    // Find the node before the position to delete
    struct Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
        if (temp == head)
        {
            printf("Position %d is out of bounds\n", position);
            return;
        }
    }

    // Check if the node to delete exists
    if (temp->next == head)
    {
        printf("Position %d is out of bounds\n", position);
        return;
    }

    struct Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
    printf("Node at position %d deleted\n", position);
}

void Display()
{
    // Check if list is empty
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    printf("Circular List: ");

    // Traverse the circular list
    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to %d)\n", head->data);
}

int countNodes()
{
    if (head == NULL)
        return 0;

    int count = 0;
    struct Node *temp = head;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != head);

    return count;
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
        printf("4: Display the Circular List\n");
        printf("5: Search a Value\n");
        printf("6: Delete at End\n");
        printf("7: Delete at Beginning\n");
        printf("8: Delete at Position\n");
        printf("9: Count Nodes\n");
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
            printf("Enter value to search: ");
            scanf("%d", &data);
            search(data);
            break;
        case 6:
            deleteAtEnd();
            break;
        case 7:
            deleteAtBeginning();
            break;
        case 8:
            printf("Enter position to delete: ");
            scanf("%d", &position);
            deleteAtPosition(position);
            break;
        case 9:
            printf("Number of nodes: %d\n", countNodes());
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
