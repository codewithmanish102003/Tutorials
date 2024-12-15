// Binary Tree traversal in C

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root != NULL){
  inorderTraversal(root->left);
  printf("%d ->", root->data);
  inorderTraversal(root->right);
  }
}

// Preorder traversal
void preorderTraversal(struct  node* root){ 
    if(root!=NULL){
        printf("%d ->", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Postorder traversal
void postorderTraversal(struct node* root) {
  if (root != NULL){
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->data);
  }
}

// Create a new Node
struct node* createNode(int data) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int data) {
  root->left = createNode(data);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int data) {
  root->right = createNode(data);
  return root->right;
}

int main() {
  struct node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);
  insertLeft(root->right,6);

  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);

  return 0;
}