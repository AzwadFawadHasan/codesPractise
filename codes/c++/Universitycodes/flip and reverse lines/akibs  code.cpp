#include <iostream>
#include <queue>
using namespace std;

struct node
{
	int key;
	node* left;
	node* right;
	node()
	{
		key = 0;
		left = NULL;
		right = NULL;
	}
};


// Insert Node Using Recursion
node* insertNode(node* n, int k)
{

	if (n == NULL)
	{
		node* temp = new node;
		temp->key = k;
		return temp;
	}

	else if (k < n->key)
	{
		n->left = insertNode(n->left, k);
		return n;
	}

	else if (k > n->key)
	{
		n->right = insertNode(n->right, k);
		return n;
	}
}

// Printing InOrder Using Recursion
void printInOrder(node* n)
{
	if (n == NULL)
		return;
	printInOrder(n->left);
	cout << n->key << " ";
	printInOrder(n->right);

}

// Searching A Node Using Recursion
bool searchTree(node* n, int k)
{
	if (n == NULL)
	{
		return false;
	}
	else if (n->key == k)
	{
		return true;
	}

	else if (k < n->key)
	{
		searchTree(n->left,k);
	}

	else if (k > n->key)
	{
		searchTree(n->right, k);
	}
}

// Deleting Node Using Recursion



// 1. Printing in Level Wise Using Queue
void levelPrint(node* n)
{
	queue<node*> q;

	q.push(n);
	while (!q.empty())
	{
		int l = q.size();
		for (int i = 1; i <= l; i++)
		{
			node* temp = q.front();
			cout << temp->key << " ";

			if (temp->left != NULL)
			{
				q.push(temp->left);
			}

			if (temp->right != NULL)
			{
				q.push(temp->right);
			}
			q.pop();
		}
		cout << endl;
	}
}

//2. Maximum amoung the Level
int maxLevel(int* a, int size)
{
	int max = a[0];
	for (int i = 0; i < size-1; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

void levelPrintMax(node* n)
{
	queue<node*> q;

	q.push(n);
	while (!q.empty())
	{
		int arr[10];

		int l = q.size();
		int i;
		for (i = 1; i <= l; i++)
		{
			node* temp = q.front();
			arr[i-1] = temp->key;

			if (temp->left != NULL)
			{
				q.push(temp->left);
			}

			if (temp->right != NULL)
			{
				q.push(temp->right);
			}
			q.pop();
		}
		cout << maxLevel(arr,i) << " ";
		cout << endl;
	}
}

// 3. Median Of A Binary Tree
int arr[100];
int i = 0;
void InOrder(node* n)
{
	if (n == NULL)
		return;
	InOrder(n->left);
	arr[i] = n->key;
	i++;
	InOrder(n->right);
}
float medianOfTree(node* n)
{
	InOrder(n);
	if (i % 2 == 0)
	{
		int j = i / 2;
		return (arr[j] + arr[j - 1]) / 2.0;
	}
	else
	{
		int j = i  / 2;
		return arr[j];
	}
}

// 4. Leaf ODD or EVEN
void leafODDorEven(node* n)
{
	if (n == NULL)
		return;
	else if (n->right == NULL && n->left == NULL)
	{
		if (n->key % 2 == 0)
			cout << "Even ";
		else
			cout << "ODD ";
		return;
	}
	leafODDorEven(n->left);
	leafODDorEven(n->right);
}

// 5. Predecessor and Successor of Main Node
void P_and_S(node* n)
{
	InOrder(n);
	int k = n->key;
	int j;
	for (j = 0; true; j++)
	{
		if (arr[j] == k)
		{
			break;
		}
	}
	cout << "Predecessor is " << arr[j - 1] << " and Successor is " << arr[j + 1] << endl;
}

// 6. Total Number of Nodes
int totalNode(node* n)
{
	InOrder(n);
	return i;
}

// 7. Leaf Node Printing
void printLeaf(node* n)
{
	if (n == NULL)
		return;
	else if (n->right == NULL && n->left == NULL)
	{
		cout << n->key << " ";
		return;
	}
	leafODDorEven(n->left);
	leafODDorEven(n->right);
}

// 8. Height of a Tree

int heightTree(node* n)
{
	if (n == NULL)
		return -1;
	int left = heightTree(n->left);
	int right = heightTree(n->right);
	
	if (left <= right)
	{
		return (right + 1);
	}
	else if (left > right)
	{
		return (left + 1);
	}

}

int main()
{
	node* root = NULL;

	root = insertNode(root, 10);
	insertNode(root, 5);
	insertNode(root, 13);
	insertNode(root, 3);
	insertNode(root, 7);
	insertNode(root, 14);
//	insertNode(root, 4);

	printInOrder(root);
	//levelPrintMax(root);
	cout << medianOfTree(root) << endl;
	//leafODDorEven(root);
	P_and_S(root);
	//cout << totalNode(root);
	cout << heightTree(root) <<endl;

	/*if (searchTree(root, 12))
		cout << "\nFound" << endl;
	else
		cout << "\nNot Found" << endl;*/
}

/////no 0 akib

/*
struct node* deleteNode(struct node* root, int key)
{
    if (root == NULL)
        return root;

    
    if (key < root->key)
        root->left = deleteNode(root->left, key);

    
    else if (key > root->key)
        root->right = deleteNode(root->right, key);

    else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            //delete root;
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            //delete root;
            return temp;
        }

        struct node* temp = minValueNode(root->right);


        root->key = temp->key;

        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
void deleteOdd(struct node* root1)
{
    if (root1 == NULL)
        return;

    else if (root1->key % 2 != 0 && root1->left && root1->right == NULL)
    {
        deleteNode(Gtemp , root1->key);
        
    }
    deleteOdd(root1->right);
    deleteOdd(root1->left);
}


*/
