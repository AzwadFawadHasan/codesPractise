
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


void printingthetree(struct node *root)
{

    if (root == NULL)
        return;
    cout<<root->key<<" ";
    printingthetree(root->left);
    printingthetree(root->right);
}


// Converting a BST into an Array
void BSTtoArray(node *root, int A[])
{
    static int pos = 0;
    if(root == NULL) return;

    BSTtoArray(root->left, A);
    A[pos++] = root->key;
    BSTtoArray(root->right, A);

}

int sizeoftree(node *root) {
    if(root == NULL) return 0;
    else
        return sizeoftree(root->left) + sizeoftree(root->right) + 1;
}

// Drive Code
int main()
{
    struct node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 3);
    root = insert(root, 9);
    root = insert(root, 8);
    root = insert(root, 7);
    root = insert(root, 6);
    root = insert(root, 100);

    cout<<"THe bst  : ";
    printingthetree(root);

    int getTreeSIZE = sizeoftree(root);

    int sumofarray = 0;

    int *A = new int[getTreeSIZE];
    BSTtoArray(root, A);
	cout << "\nNewly made  Array content : ";
	for(int i = 0; i < getTreeSIZE; i++)
    {
        cout << A[i] << " ";
        sumofarray = A[i] + sumofarray;
    }
	cout<<"\nTotal sum of all the values entered : "<<sumofarray<<endl;

    return 0;
}

