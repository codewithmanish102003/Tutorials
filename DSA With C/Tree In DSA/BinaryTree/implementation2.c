#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *newNode; // creating a node pointer
    newNode = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    newNode->data = data; // Setting the data
    newNode->left = NULL; // Setting the left and right children to NULL
    newNode->right = NULL; // Setting the left and right children to NULL
    return newNode; // Finally returning the created node
}

void preorderTraversal(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct  node* root){
    if(root!=NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

void inorderTraversal(struct  node* root){
    if(root!=NULL){
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct node *root = createNode(1);
    struct node *node2 = createNode(2);
    struct node *node3 = createNode(3);
    struct node *node4 = createNode(4);
    struct node *node5 = createNode(6);
    // Finally The tree looks like this:
    //      1
    //     / \
    //    2   3
    //   /    /
    //  4    6

    // Linking the root node with left and right children
    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node3->left = node5;

    // preorderTraversal(p);
    // printf("\n");
    // postorderTraversal(p);
    // printf("\n");
    inorderTraversal(root);
    return 0;
}
