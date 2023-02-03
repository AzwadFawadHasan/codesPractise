#include <iostream>
using namespace std;

struct node {
	int data ;
	node * left;node * right;
	node()
	{
		data= 0;
		left = right = NULL;
	}
	
};

node * insert (node * n, int data)
{
	if (n == NULL)
	{
		node * temp = new node;
		temp->data = data ;
		
		return temp;	
	}
	
	else if (n->data >data)
	{
		n->left=insert (n->left, data);
		return n ;
	}
	else
	{
		n->right = insert (n->right, data);
		return n;
	}

}
//int count ;
static int c;
void display(node *n)
{
	if (n==NULL)
	{
		return;
	}
		c++;
		// count =0;
		display (n->left);
		cout <<n->data<<" \n";
	//	cout <<"\n count\t"<< count;
		display (n->right);
		//?/count++;
		

}



bool exist (node *n, int val)
{
	if (n==NULL)
	{
	
		
		return false;
	}
	
	
	if (n->data== val)
	{
		return true;
	}
	if (n->data > val)
		exist(n->left,val);
	else
		exist(n->right,val);
}

int main (){
	
	node* root = NULL;

	root = insert(root, 10);
	root =insert(root, 5);
	root =	insert(root, 13);
	root =	insert(root, 3);
	root =	insert(root, 7);
	root =	insert(root, 14);
	//display(root);	
cout <<" 0 represents false, 1 represents true "<< endl;

cout << "95 exist ? : ";
	cout << exist(root, 95);
	cout <<endl;
	cout << "10 exist ? :"
	;cout << exist (root, 10);
	cout << endl;
	
	
}