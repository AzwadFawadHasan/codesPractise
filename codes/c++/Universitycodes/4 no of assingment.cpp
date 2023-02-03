#include <iostream>
using namespace std;



struct Node
{
    struct Node* left, *right;
    int key;
};

struct Node* newNode(int key)
{
    struct Node* ptr = new Node;
    ptr->key = key;
    ptr->left = ptr->right = NULL;
    return ptr;
}

struct Node* insert(struct Node* root, int key)
{
    if (!root)
        root = newNode(key);
    else if (root->key > key)
        root->left = insert(root->left, key);
    else if (root->key < key)
        root->right = insert(root->right, key);
    return root;
}

void lv(struct Node *root);
void rv(struct Node *root);

void checkRight(struct Node *node)
{
    if(node==NULL)
        return;
    lv(node->left);
    checkRight(node->right);
}
void lv(struct Node *root)
{
    if(root==NULL)
        return;
    cout<<root->key<<" ";
    lv(root->left);
    checkRight(root->right);
}



void checkLeft(struct Node *node)
{
    if(node==NULL)
        return;
    rv(node->right);
    checkLeft(node->left);
}
void rv(struct Node *root)
{
    if(root==NULL)
        return;
    cout<<root->key<<" ";
    rv(root->right);
    checkLeft(root->left);
}

// Driver code
int main()
{
    struct Node* root = NULL;
    root = insert(root, 788);
    insert(root, 1000);
    insert(root, 58);
    insert(root, 1885);
    insert(root, 30);
    insert(root, 2785);
    insert(root, 3235);
    insert(root, 276);
    insert(root, 7);

    cout<<"nodes on the left side: ";
    lv(root);
    
    cout << endl;

    cout<<"NOdes on the right side : ";
    rv(root);

    return 0;
}
