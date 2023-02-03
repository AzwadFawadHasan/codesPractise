#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node *left, *right;
};


Node *newNode(int key)
{
    Node *node = new Node;
    node->data = key;
    node->left = node->right = NULL;

    return node;
}


void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


Node *insert(Node *root, int key)
{
   
    if (root == NULL)
        return newNode(key);

   
    if (key < root->data)
        root->left = insert(root->left, key);

    
    else
        root->right = insert(root->right, key);

    return root;
}

Node *truncate(Node *root, int min, int max)
{
    // base case
    if (root == NULL)
        return root;

   
    root->left = truncate(root->left, min, max);
    root->right = truncate(root->right, min, max);

    Node *curr = root;

    
    if (root->data < min)
    {
        root = root->right;
        delete curr;
    }
   
    else if (root->data > max)
    {
        root = root->left;
        delete curr;
    }

    return root;
}


int main()
{
    Node *root = NULL;

    root = insert(root, 2125);
    root = insert(root, 140);
    root = insert(root, 90);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 16);
    root = insert(root, 5);

   
    root = truncate(root, 10, 19);
    inorder(root);

    return 0;
}
