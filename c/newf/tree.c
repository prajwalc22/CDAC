#include <stdio.h>
#include <stdlib.h>

/**
 * C program to implement a Binary Search Tree (BST) using an array.
 * - The root is at index 0.
 * - For a node at index `i`, its left child is at `2*i + 1` and right child is at `2*i + 2`.
 * - An empty node is represented by -1.
 */

// Define the maximum number of nodes the tree can hold.
#define MAX_SIZE 100

// The array that will store the tree. Declared globally for simplicity.
int tree[MAX_SIZE];

/**
 * @brief Initializes the tree by setting all elements to -1 (empty).
 */
void init_tree()
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        tree[i] = -1; // -1 indicates an empty spot in the tree.
    }
}

/**
 * @brief Inserts a new data value into the BST.
 * @param data The integer value to be inserted.
 */
void insert(int data)
{
    // Start the search for an insertion spot from the root.
    int current_index = 0;

    // 1. Handle the case where the tree is completely empty.
    if (tree[0] == -1)
    {
        tree[0] = data;
        printf("Inserted %d at the root (index 0).\n", data);
        return;
    }

    // 2. Traverse the tree to find the correct empty spot.
    while (current_index < MAX_SIZE && tree[current_index] != -1) // here because we are comparing it with a node first then performing insertion
    {
        // If data is smaller, go to the left child.
        if (data < tree[current_index])
        {
            current_index = 2 * current_index + 1;
        }
        // If data is larger, go to the right child.
        else if (data > tree[current_index])
        {
            current_index = 2 * current_index + 2;
        }
        // If data is a duplicate, do not insert and inform the user.
        else
        {
            printf("Value %d already exists in the tree. No insertion.\n", data);
            return;
        }
    }

    // 3. Insert the data if the found index is within bounds.
    if (current_index < MAX_SIZE)
    {
        tree[current_index] = data;
        printf("Inserted %d at index %d.\n", data, current_index);
    }
    else
    {
        printf("Could not insert %d. Tree is full or index out of bounds.\n", data);
    }
}

/**
 * @brief Performs an in-order traversal of the BST.
 * For a BST, this will print the elements in sorted order.
 * @param index The index of the current node to start traversal from (usually 0).
 */
void inorder_traversal(int index)
{
    // Base case: If the index is out of bounds or the node is empty, stop.
    if (index >= MAX_SIZE || tree[index] == -1)
    {
        return;
    }

    // 1. Recursively visit the left subtree.
    inorder_traversal(2 * index + 1);

    // 2. Print the current node's data.
    printf("%d ", tree[index]);

    // 3. Recursively visit the right subtree.
    inorder_traversal(2 * index + 2);
}
void preorder_traversal(int index)
{
    // Base case: If the index is out of bounds or the node is empty, stop.
    if (index >= MAX_SIZE || tree[index] == -1)
    {
        return;
    }

    // 1. Print the current node's data (Root).
    printf("%d ", tree[index]);

    // 2. Recursively visit the left subtree.
    preorder_traversal(2 * index + 1);

    // 3. Recursively visit the right subtree.
    preorder_traversal(2 * index + 2);
}
void postorder_traversal(int index)
{
    // Base case: If the index is out of bounds or the node is empty, stop.
    if (index >= MAX_SIZE || tree[index] == -1)
    {
        return;
    }

    // 1. Recursively visit the left subtree.
    postorder_traversal(2 * index + 1);

    // 2. Recursively visit the right subtree.
    postorder_traversal(2 * index + 2);

    // 3. Print the current node's data (Root).
    printf("%d ", tree[index]);
}

/**
 * @brief Searches for a value in the tree.
 * @param data The value to search for.
 * @return The index of the node if found, otherwise -1.
 */
int search(int data)
{
    int current_index = 0;

    // Traverse the tree until we go out of bounds or find an empty spot.
    while (current_index < MAX_SIZE && tree[current_index] != -1)
    {
        // If we found the data, return its index.
        if (data == tree[current_index])
        {
            return current_index;
        }
        // If the search data is smaller, go left.
        else if (data < tree[current_index])
        {
            current_index = 2 * current_index + 1;
        }
        // Otherwise, go right.
        else
        {
            current_index = 2 * current_index + 2;
        }
    }
    // If the loop finishes, the value was not found.
    return -1;
}

int main()
{
    // Initialize the tree to be empty.
    init_tree();

    // Insert some elements into the tree.
    printf("--- Inserting Elements ---\n");
    insert(27);
    insert(14);
    insert(35);
    insert(10);
    insert(19);
    insert(31);
    insert(42);
    insert(14); // Test duplicate insertion

    // Print the array to show the internal representation.
    printf("\n--- Internal Array Representation ---\n");
    for (int i = 0; i < 20; i++) // Print first 20 elements for brevity
    {
        printf("tree[%d] = %d\n", i, tree[i]);
    }

    // Perform an in-order traversal to display the sorted elements.
    printf("\n--- In-order Traversal (Sorted Order) ---\n");
    inorder_traversal(0);
    printf("\n");

    // Search for elements.
    printf("\n--- Searching for Elements ---\n");
    int search_val = 19;
    int result = search(search_val);
    if (result != -1)
    {
        printf("Found %d at index %d.\n", search_val, result);
    }
    else
    {
        printf("%d not found in the tree.\n", search_val);
    }

    search_val = 50;
    result = search(search_val);
    if (result != -1)
    {
        printf("Found %d at index %d.\n", search_val, result);
    }
    else
    {
        printf("%d not found in the tree.\n", search_val);
    }

    return 0;
}
