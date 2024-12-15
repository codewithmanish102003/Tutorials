#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *newNode;                                 // creating a node pointer
    newNode = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    newNode->data = data;                                 // Setting the data
    newNode->left = NULL;                                 // Setting the left and right children to NULL
    newNode->right = NULL;                                // Setting the left and right children to NULL
    return newNode;                                       // Finally returning the created node
}

void preorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

void inorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Check If the tree is BST or Not
int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

// insertion In BST
void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("\nCannot insert %d, already in BST", key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int data)
{

    struct node *iPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    // searching for the node to be deleted
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
        // deletion strategy when the node is found
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

int main()
{

    // Constructing the root node - Using Function (Recommended)
    struct node *root = createNode(6);
    struct node *node2 = createNode(5);
    struct node *node3 = createNode(8);
    struct node *node4 = createNode(4);
    struct node *node5 = createNode(7);
    // Finally The tree looks like this:
    //      6
    //     / \
    //    5   8
    //   /   /
    //  4   7

    // Linking the root node with left and right children
    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node3->left = node5;

    // preorderTraversal(root);
    // printf("\n");
    // postorderTraversal(root);
    // printf("\n");
    inorderTraversal(root);

    if (isBST(root))
    {
        printf("\nThis is a bst\n");
    }
    else
    {
        printf("\nThis is not a bst\n");
    }
    int value;
    printf("Enter element to be Inserted : ");
    scanf("%d", &value);
    insert(root, value);
    printf("After insertion:\n");
    inorderTraversal(root);
     printf("\nEnter element to be deleted : ");
    scanf("%d", &value);
    deleteNode(root, value);
    printf("After deletion:\n");
    inorderTraversal(root);
    return 0;
}
