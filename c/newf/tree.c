#include <stdio.h>
#include <stdlib.h>

// Structure for BST node
struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Function to create a new node
struct TreeNode *createNode(int data)
{
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert function
struct TreeNode *insert(struct TreeNode *root, int data)
{
    // If tree is empty, create root node
    if (root == NULL)
    {
        return createNode(data);
    }

    // If data is smaller, insert in left subtree
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    // If data is larger, insert in right subtree
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    // If data already exists, do nothing

    return root;
}

// Search function
struct TreeNode *search(struct TreeNode *root, int data)
{
    // Base case: root is NULL or data is found
    if (root == NULL || root->data == data)
    {
        return root;
    }

    // Data is smaller, search left subtree
    if (data < root->data)
    {
        return search(root->left, data);
    }
    // Data is larger, search right subtree
    return search(root->right, data);
}

// Find minimum value (leftmost node)
struct TreeNode *findMin(struct TreeNode *root)
{
    while (root && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

// Delete function
struct TreeNode *deleteNode(struct TreeNode *root, int data)
{
    if (root == NULL)
    {
        return root;
    }

    // Find the node to delete
    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        // Node to be deleted found

        // Case 1: No children (leaf node)
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        // Case 2: One child
        else if (root->left == NULL)
        {
            struct TreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct TreeNode *temp = root->left;
            free(root);
            return temp;
        }
        // Case 3: Two children
        else
        {
            struct TreeNode *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

// In-order traversal (gives sorted output)
void inorderTraversal(struct TreeNode *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// BST Main function
int main()
{
    struct TreeNode *root = NULL;

    // Insert elements
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("In-order traversal: ");
    inorderTraversal(root);
    printf("\n");

    // Search for a value
    int searchValue = 40;
    if (search(root, searchValue))
    {
        printf("Found %d in BST\n", searchValue);
    }
    else
    {
        printf("%d not found in BST\n", searchValue);
    }

    // Delete a node
    root = deleteNode(root, 30);
    printf("After deleting 30: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}