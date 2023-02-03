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

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int smallestKTHvalue(Node *root, int *m, int k)
{
    if (root == NULL)
        return INT_MAX;

    int left = smallestKTHvalue(root->left, m, k);

    if (left != INT_MAX)
        return left;

    if (++*m == k)
        return root->data;

    return smallestKTHvalue(root->right, m, k);
}

int smallestKTHvalue(Node *root, int k)
{
    int m = 0;

    return smallestKTHvalue(root, &m, k);
}

int largestKTHvalue(Node *root, int *m, int k)
{
    if (root == NULL)
        return INT_MAX;

    int left = largestKTHvalue(root->right, m, k);

    if (left != INT_MAX)
        return left;

    if (++*m == k)
        return root->data;

    return largestKTHvalue(root->left, m, k);
}

int largestKTHvalue(Node *root, int k)
{
    int m = 0;

    return largestKTHvalue(root, &m, k);
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 10);
	root =insert(root, 5);
	root =	insert(root, 13);
	root =	insert(root, 3);
	root =	insert(root, 7);
	root =	insert(root, 14);

    int k = 2;
    int smallest = smallestKTHvalue(root, k);

    if (smallest != INT_MAX)
        cout << "k'th smallest value in the bst : " << smallest << endl;
    else
        cout << "Invalid Input";

    int largest = largestKTHvalue(root, k);

    if (largest != INT_MAX)
        cout << "k'th largest value in the bst : " << largest;
    else
        cout << "Invalid Input";

    return 0;
}


