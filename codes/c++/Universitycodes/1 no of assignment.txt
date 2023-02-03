

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;



struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

int p=1;

void PrintTree(struct node *root)
{
    if (root == NULL)
        return;
    cout<<root->key<<" ";
    PrintTree(root->left);
    PrintTree(root->right);

}

struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
struct node * minValueNode(struct node* node)
{
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

int countnode( node *root)
{
    if(root == NULL)
        return 0;
    if(root -> left != NULL)
    {
        p = p+1;
        p = countnode(root -> left);
    }
    if(root -> right != NULL)
    {
        p = p+1;
        p = countnode(root -> right);
    }

    return p;
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 5440);
    root = insert(root, 380);
    root = insert(root, 200);
    root = insert(root, 420);
   


    cout<<"Total number of  Nodes: "<<countnode(root)<<endl;

    return 0;
}
