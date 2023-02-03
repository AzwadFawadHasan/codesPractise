
#include<iostream>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
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

//printing the whole tree
void printingthetree(struct node *root)
{
    if (root == NULL)
        return;
    cout<<root->key<<" ";
    printingthetree(root->left);
    printingthetree(root->right);

}

// Sorted Tree
void sortingthetree(struct node *root)
{
    if (root == NULL)
        return;

    sortingthetree(root->left);
    cout<<root->key<<" ";
    sortingthetree(root->right);
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 5124);
    root = insert(root, 305);
    root = insert(root, 201);
    root = insert(root, 4);
    root = insert(root, 9);
    root = insert(root, 550);
    root = insert(root, 912);
    root = insert(root, 6451);
    root = insert(root, 1230);
    root = insert(root, 7);
    root = insert(root, 1);

    cout<<"Printing Tree: ";
    printingthetree(root);
	cout << endl << endl;
    cout<<"Sorted tree: ";
    sortingthetree(root);


    return 0;
}

