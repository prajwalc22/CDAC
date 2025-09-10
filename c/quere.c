/*
 * Features:
 *  - Enqueue (insert at rear)
 *  - Dequeue (remove from front)
 *  - Peek (front element)
 *  - Display queue contents
 *  - Check empty/full conditions
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5 /* Maximum size of the queue */

/* Queue structure */
struct Queue
{
    int arr[MAX];
    int front; /* index of front element */
    int rear;  /* index of last element */
    int size;  /* current number of elements */
};

/* -------- Prototypes -------- */
void initQueue(struct Queue *q);
int isEmpty(struct Queue *q);
int isFull(struct Queue *q);
void enqueue(struct Queue *q, int value);
int dequeue(struct Queue *q);
int peek(struct Queue *q);
void display(struct Queue *q);

/* -------- Implementation -------- */

/* Initialize queue */
void initQueue(struct Queue *q)
{
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

/* Check empty */
int isEmpty(struct Queue *q)
{
    return q->size == 0;
}

/* Check full */
int isFull(struct Queue *q)
{
    return q->size == MAX;
}

/* Enqueue (insert at rear)
 * Algorithm:
 *   if full -> overflow
 *   else rear = (rear + 1) % MAX
 *        arr[rear] = value
 *        size++
 */
void enqueue(struct Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue overflow: cannot enqueue %d\n", value);
        return;
    }
    q->rear = (q->rear + 1) % MAX;
    q->arr[q->rear] = value;
    q->size++;
    printf("Enqueued %d\n", value);
}

/* Dequeue (remove from front)
 * Algorithm:
 *   if empty -> underflow
 *   else value = arr[front]
 *        front = (front + 1) % MAX
 *        size--
 */
int dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue underflow: cannot dequeue.\n");
        return -100;
    }
    int value = q->arr[q->front];
    q->front = (q->front + 1) % MAX;
    q->size--;
    return value;
}

/* Peek (front element without removal) */
int peek(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty: nothing to peek.\n");
        return -100;
    }
    return q->arr[q->front];
}

/* Display queue contents */
void display(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue contents (front -> rear): ");
    int count = q->size;
    int i = q->front;
    while (count--)
    {
        printf("%d ", q->arr[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}

/* ----------- Main (demo menu) ----------- */
int main(void)
{
    struct Queue q;
    initQueue(&q);

    int choice, value;
    while (1)
    {
        printf("\nQueue Menu:\n");
        printf("1: Enqueue\n");
        printf("2: Dequeue\n");
        printf("3: Peek\n");
        printf("4: Display\n");
        printf("5: Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(&q, value);
            break;
        case 2:
            value = dequeue(&q);
            if (value != -100)
                printf("Dequeued: %d\n", value);
            break;
        case 3:
            value = peek(&q);
            if (value != -100)
                printf("Front: %d\n", value);
            break;
        case 4:
            display(&q);
            break;
        case 5:
            printf("Exiting.\n");
            exit(0);
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
