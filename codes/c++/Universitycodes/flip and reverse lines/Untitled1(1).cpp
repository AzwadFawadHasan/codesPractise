
#include <iostream>
using namespace std;

struct node {
	int data ;
	node * left 
	; node * right 
	;
};

node* insert  (node *n, int data)
{
	if (n== NULL)
	{
		node * temp = new node ;
		temp -> data = data ;
		temp -> left = temp -> right = NULL;
		
	}
	else if ( data<n->data )
	{
		n->left = insert (n->left , data);
		return n;
		
	}
	else
	{
		n->right = insert (n->right , data);
		return  n;
		
		
	}
}

void inorder (node * n )
{ 
	if (n == NULL)
	{
		return;
	}
	else
	{
		inorder (n->left);
		cout <<  n->data <<" ";
		inorder (n->right);
	}
}

// this function finds the predecdsosr and the sccessor of a key in bst
// it sets pre nad succesor as predecdor and succeor repectively 
void deletepands(node * root ,node *& pre . node * & suc , int key)
{
	// base case 
	if (root == NULL)
	{
		return ;
		
	}
	if (root ->data== key)
	{
		if (root -> left != NULL)
		{
			node * temp = root -> left;
			while (temp-> right )
			temp = temp -> right ;
			pre = temp;
			
		}
		// if the minimum value  ub right subree is successor
		if (root ->right != NULL)
		{
			node * temp = root ->right;
			while (temp -> left )
			temp = temp -> left;
			suc = temp;
			
		 } 
		 return;
		 if (root -> key > key )
		 {
		 	suc = root;
		 	deletepands(root -> left , pre , suc , key );
		 	
		 }
		 else {
		 	pre = root ; 
		 	deletepands(root ->right , re, suc ,key);
		 	
		 }
	}
}
node * newnode (int item)
{
	node * temp = new node ;
	temp -> key = item ;
	temp -> left= temp 0> right = NULL;
	return temp;
}


int main (){
	node * root = NULL;
	root = insert (root, 10);
	insert (root , 5);
	insert (root , 79);
	inorder (root);
}














/*
#include <iostream>
using namespace std;

struct node {
	int data;
	node * left ;
	node * right ;
	
	node (){
		data = 0;
		left = NULL;
		right = NULL;
		
	}
};

node * insert (node * n, int k)
{
	if (n==NULL)
	{
		node * temp = new node ();
		temp->data = k;
		return temp;
	}
	
	else if (k < n->data)
	{
		n->left = insert(n->left, k);
		return n;
	}

	else if (k > n->data)
	{
		n->right = insert(n->right, k);
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

int main (){
	node * root = NULL;
	root = insert (root, 5);
	insert (root, 8);
	insert (root , 2);
	inorder (root);
}
*/
