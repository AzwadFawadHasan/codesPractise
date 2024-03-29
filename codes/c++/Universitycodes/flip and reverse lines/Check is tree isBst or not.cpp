// C++ program to check if a given tree is BST.
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to
left child and a pointer to right child */
struct Node {
	int data;
	struct Node *left, *right;

	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

// Utility function to check if Binary Tree is BST
bool isBSTUtil(struct Node* root, int& prev)
{
	// traverse the tree in inorder fashion and
	// keep track of prev node
	if (root) {
		if (!isBSTUtil(root->left, prev))
			return false;

		// Allows only distinct valued nodes
		if (root->data <= prev)
			return false;

		// Initialize prev to current
		prev = root->data;

		return isBSTUtil(root->right, prev);
	}

	return true;
}

// Function to check if Binary Tree is BST
bool isBST(Node* root)
{
	int prev = INT_MIN;
	return isBSTUtil(root, prev);
}

/* Driver code*/
int main()
{
	struct Node* root = new Node(30);
	root->left = new Node(9);
	root->right = new Node(200);
	root->left->left = new Node(315);
	root->left->right = new Node(520);

	if (isBST(root))
		cout << "Is BST";
	else
		cout << "Not a BST";

	return 0;
}

