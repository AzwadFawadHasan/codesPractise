#include <iostream>
using namespace std;

struct node {
	int data ;
	node * left ;
	node * right ;
	node(){
		data = 0;
		left = NULL;
		right = NULL;
		
	}
};

node * insert (node * n, int k)
{
	if (n == NULL)
	{
		node * temp = new node ;
		temp -> data = k;
		temp -> left = NULL;
		temp -> right = NULL;
		return temp;
		
	}
	if (k < n->data)
	{
		n->left = insert (n->left , k);
		return n;
		
		
	}
	else
	{
		n->right = insert (n->right, k);
		return n;
	}
}
void inorder (node * n )
{
	if (n == NULL)
	{
		return ;
	}
	else
	{
		inorder (n->left);
		cout <<n->data << " ";
		inorder (n->right);
	}
}
void odd(node *n)
{
	if (n== NULL)
	{
		return;
	}
	else{
		if (n->data %2 ==0)
		cout <<"even \n"<< n->data<<" ";
		odd(n->left);
		odd (n->right);
	}

}
static int largest =INT_MIN;
	static int c=0;
	int prev=0;
void leaf(node *n)
{
	if (n==NULL)
	{
		return;
	}

	if (c==1 && n->data %2 != 0)
		{
			prev=0;
		}
		else if (n->data %2 != 0)
		{
			prev=n->data;
		}
	if (n->left == NULL && n->right == NULL)
	{
		c+=1;
		if (n->data> largest && (n->data %2 !=0))
		{
			largest =n->data;
		
		}
		
	}

 	leaf (n->left);
 	leaf (n->right);
 	
 	
}

int main ()
{
	node * root = NULL;
	root = insert (root, 10);
	root = insert (root, 5);
	root = insert (root, 13);
	root = insert (root,3);
	root = insert (root,7);
	root = insert (root, 14);
	inorder (root);
//	odd(root);
leaf (root);
cout << "the number of leaf nodes are "<< c;
cout <<"\n the largest leaf node is "<< largest;

	
}
