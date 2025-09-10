#include <stdio.h>  // For input/output functions like printf()
#include <stdlib.h> // For standard library functions (not used here but good practice)

/*
 * STACK DATA STRUCTURE IMPLEMENTATION USING ARRAY
 *
 * A stack is a LIFO (Last In, First Out) data structure where:
 * - Elements are added (pushed) to the top
 * - Elements are removed (popped) from the top
 * - Only the top element can be accessed directly
 */

#define MAX_SIZE 10 // Maximum capacity of the stack (constant)

/* Global Variables */
int a[MAX_SIZE]; // Array to store stack elements
int top = -1;    // Index of the top element (-1 means empty stack)

/*
 * PUSH OPERATION: Add an element to the top of the stack
 * Parameter: ele - the integer element to be pushed
 * Time Complexity: O(1)
 */
void push(int ele)
{
    // Check if stack has space (avoid overflow)
    if (top < MAX_SIZE - 1) // Stack is full when top == MAX_SIZE-1
    {
        a[++top] = ele; // Pre-increment top, then assign element
        printf("Pushed: %d\n", ele);
    }
    else
    {
        // Stack overflow condition
        printf("Stack is full. Cannot push: %d\n", ele);
    }
}

/*
 * POP OPERATION: Remove and return the top element from stack
 * Returns: The popped element, or -1 if stack is empty
 * Time Complexity: O(1)
 */
int pop()
{
    // Check if stack has elements (avoid underflow)
    if (top >= 0) // Stack is empty when top == -1
    {
        int ele = a[top]; // Store the top element
        top--;            // Move top pointer down (logical removal)
        printf("Popped: %d\n", ele);
        return ele; // Return the removed element
    }
    else
    {
        // Stack underflow condition
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Error indicator
    }
}

/*
 * PEEK OPERATION: View the top element without removing it
 * Returns: The top element, or -1 if stack is empty
 * Time Complexity: O(1)
 */
int peek()
{
    // Check if stack has elements
    if (top >= 0)
    {
        int ele = a[top]; // Get top element (no removal)
        printf("Peeked: %d\n", ele);
        return ele;
    }
    else
    {
        // Stack is empty
        printf("Stack is empty. Cannot peek.\n");
        return -1; // Error indicator
    }
}

/*
 * CHECK IF STACK IS EMPTY
 * Returns: 1 (true) if empty, 0 (false) if not empty
 * Time Complexity: O(1)
 */
int isEmpty()
{
    return top == -1; // Empty when top pointer is at initial position
}

/*
 * CHECK IF STACK IS FULL
 * Returns: 1 (true) if full, 0 (false) if not full
 * Time Complexity: O(1)
 */
int isFull()
{
    return top == MAX_SIZE - 1; // Full when top is at last valid index
}

/*
 * MAIN FUNCTION: Demonstrates stack operations
 */
int main()
{
    // Test push operations
    push(1); // Stack: [1]        top = 0
    push(2); // Stack: [1, 2]     top = 1
    push(3); // Stack: [1, 2, 3]  top = 2

    // Test peek operation (view top without removing)
    peek(); // Shows: 3 (top element)

    // Test pop operations (remove elements in LIFO order)
    pop(); // Removes: 3, Stack: [1, 2]     top = 1
    pop(); // Removes: 2, Stack: [1]        top = 0
    pop(); // Removes: 1, Stack: []         top = -1
    pop(); // Error: Stack is empty

    // Test peek on empty stack
    peek(); // Error: Stack is empty

    return 0; // Program ends successfully
}
