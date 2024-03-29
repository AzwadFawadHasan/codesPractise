#include<stdio.h>
#include<stdlib.h>
struct node{
   int key;
   struct node *left, *right;
};
struct node *newNode(int item){
   struct node *temp = (struct node *)malloc(sizeof(struct node));
   temp->key = item;
   temp->left = temp->right = NULL;
   return temp;
}
void inordertraversal(struct node *root){
   if (root == NULL) return;

      inordertraversal(root->left);
      printf("%d ", root->key);
      inordertraversal(root->right);

}

void preordertraversal(struct node *root){
   if (root == NULL) return;
      printf("%d ", root->key);
      preordertraversal(root->left);
      preordertraversal(root->right);
}

void postordertraversal(struct node *root){
   if (root == NULL) return;
      postordertraversal(root->left);
      postordertraversal(root->right);
      printf("%d ", root->key);
}

struct node* insert(struct node* node, int key){
   if (node == NULL) return newNode(key);
      if (key < node->key)
         node->left = insert(node->left, key);
      else
         node->right = insert(node->right, key);
   return node;
}
struct node * minValueNode(struct node* node){
   struct node* current = node;
   while (current && current->left != NULL)
      current = current->left;
   return current;
}
struct node* deleteNode(struct node* root, int key){
   if (root == NULL) return root;
      if (key < root->key)
         root->left = deleteNode(root->left, key);
      else if (key > root->key)
         root->right = deleteNode(root->right, key);
   else{
      if (root->left == NULL){
         struct node *temp = root->right;
         free(root);
         return temp;
      }
      else if (root->right == NULL){
         struct node *temp = root->left;
         free(root);
         return temp;
      }
      struct node* temp = minValueNode(root->right);
      root->key = temp->key;
      root->right = deleteNode(root->right, temp->key);
   }
   return root;
}
int main(){
   struct node *root = NULL;
   root = insert(root, 22);
   root = insert(root, 0);
   root = insert(root, 13);
   root = insert(root, 8);
   root = insert(root, 13);
   root = insert(root, 6);
   root = insert(root, 10);
    root = insert(root, 0);
     root = insert(root, 9);
      root = insert(root, 3);
       root = insert(root, 10);
        root = insert(root, 1);
         root = insert(root, 7);
        
   //root = insert(root, 60);
   //root = insert(root, 80);
   printf("Inorder traversal of the given tree \n");
   inordertraversal(root);
   printf("\npreorder traversal of the given tree \n");
   preordertraversal(root);
   printf("\npostorder traversal of the given tree \n");
   postordertraversal(root);
   printf("\nDelete 20\n");
   root = deleteNode(root, 20);
   printf("Inorder traversal of the modified tree \n");
   inordertraversal(root);
   printf("\nDelete 30\n");
   root = deleteNode(root, 30);
   printf("Inorder traversal of the modified tree \n");
   inordertraversal(root);
   printf("\nDelete 50\n");
   root = deleteNode(root, 50);
   printf("Inorder traversal of the modified tree \n");
   inordertraversal(root);
   return 0;
}
