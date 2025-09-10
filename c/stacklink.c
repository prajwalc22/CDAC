/*
 * Stack implemented with a singly linked list in C
 *
 * Operations:
 *  - push(data)    : push an element onto the stack (O(1))
 *  - pop()         : remove and return the top element (O(1))
 *  - peek() / top  : view the top element without removing (O(1))
 *  - isEmpty()     : check whether stack is empty (O(1))
 *  - display()     : print all elements from top to bottom (O(n))
 *  - freeStack()   : free all nodes before exiting
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> /* for INT_MIN sentinel when pop on empty */

/* Node structure for singly linked list */
struct Node
{
    int data;
    struct Node *next;
};

/* Top pointer (points to the top node of the stack).
 * Initialize to NULL for an empty stack.
 */
static struct Node *top = NULL;

/* Function prototypes */
void push(int data);
int pop(void);        /* returns popped value or INT_MIN if empty */
int peek(void);       /* returns top value or INT_MIN if empty */
int isEmpty(void);    /* returns 1 if empty, 0 otherwise */
void display(void);   /* prints stack from top to bottom */
void freeStack(void); /* frees all nodes (call before program exit) */

/* --------- push ----------
 * Create a new node and insert it at the front of the linked list.
 * newNode->next = top; top = newNode;
 * Time: O(1)
 */
void push(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        fprintf(stderr, "Memory allocation failed for push(%d)\n", data);
        return;
    }
    newNode->data = data;
    newNode->next = top; /* link old top below new node */
    top = newNode;       /* update top */
}

/* --------- pop ----------
 * Remove the node pointed by top and return its data.
 * If stack is empty, return INT_MIN as sentinel and print a message.
 * Time: O(1)
 */
int pop(void)
{
    if (top == NULL)
    {
        printf("Stack underflow: cannot pop from an empty stack.\n");
        return INT_MIN; /* sentinel value; caller should check */
    }
    struct Node *toDelete = top;
    int value = toDelete->data;
    top = top->next; /* move top down */
    free(toDelete);  /* free popped node */
    return value;
}

/* --------- peek ----------
 * Return the value at top without removing it.
 * If empty, return INT_MIN as sentinel.
 * Time: O(1)
 */
int peek(void)
{
    if (top == NULL)
    {
        printf("Stack is empty: nothing to peek.\n");
        return INT_MIN;
    }
    return top->data;
}

/* --------- isEmpty ----------
 * Returns 1 if stack empty, 0 otherwise
 * Time: O(1)
 */
int isEmpty(void)
{
    return (top == NULL);
}

/* --------- display ----------
 * Print stack contents from top to bottom.
 * If empty, print appropriate message.
 * Time: O(n)
 */
void display(void)
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack (top -> bottom): ");
    struct Node *p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

/* --------- freeStack ----------
 * Frees all nodes in the stack. Useful before exiting to avoid leaks.
 * Time: O(n)
 */
void freeStack(void)
{
    struct Node *p = top;
    while (p != NULL)
    {
        struct Node *next = p->next;
        free(p);
        p = next;
    }
    top = NULL;
}

/* -------------------- main: simple interactive menu -------------------- */
int main(void)
{
    int choice, value;
    while (1)
    {
        printf("\nStack Menu:\n");
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Peek (top)\n");
        printf("4: Display stack\n");
        printf("5: Is Empty?\n");
        printf("6: Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1)
        {
            fprintf(stderr, "Invalid input. Exiting.\n");
            break;
        }

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            if (scanf("%d", &value) != 1)
            {
                fprintf(stderr, "Invalid value.\n");
                while (getchar() != '\n')
                {
                } /* flush */
                break;
            }
            push(value);
            printf("Pushed %d\n", value);
            break;

        case 2:
        {
            int popped = pop();
            if (popped != INT_MIN)
            { /* check sentinel */
                printf("Popped: %d\n", popped);
            }
            break;
        }

        case 3:
        {
            int t = peek();
            if (t != INT_MIN)
                printf("Top: %d\n", t);
            break;
        }

        case 4:
            display();
            break;

        case 5:
            printf(isEmpty() ? "Stack is empty.\n" : "Stack is NOT empty.\n");
            break;

        case 6:
            freeStack();
            printf("Exiting. Memory freed.\n");
            return 0;

        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    /* in case of abnormal exit, free memory */
    freeStack();
    return 0;
}
