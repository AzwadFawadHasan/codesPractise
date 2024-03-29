#include<iostream>
#include<stdio.h>
#include<stdlib.h>

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

//printing the whole tree
void PrintTree(struct node *root)
{
    if (root == NULL)
        return;
    cout<<root->key<<" ";
    PrintTree(root->left);
    PrintTree(root->right);

}

//printing the Minimum value of whole tree
void  minimumValueforNode(struct node* node)
{
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    cout<<current->key;
}

//printing the Maximum value of whole tree
void MaximumValueforNode(struct node* node)
{
    struct node* current = node;
    while (current && current->right != NULL)
        current = current->right;
    cout<<current->key;
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


int main()
{
    struct node *root = NULL;
    root = insert(root, 54);
    root = insert(root, 30);
    root = insert(root, 690);
    root = insert(root, 4);
    root = insert(root, 780);
    root = insert(root, 960);
    root = insert(root, 808);
    root = insert(root, 901);

    cout<<"Printing the bst : ";
    PrintTree(root);
    cout << endl;
    
    cout<<"Maximum value of bst: ";
    MaximumValueforNode(root);
    cout << endl;

    cout<<"Minimum value of bst: ";
   minimumValueforNode(root);
   cout<< endl;

   

    cout<<endl;
    return 0;
}
