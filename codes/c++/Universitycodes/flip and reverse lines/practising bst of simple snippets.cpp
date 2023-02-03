#include <iostream>
using namespace std;

class node {
	public: 
			int data;
			node * left;
			node * right;
			
			node (){
				data = 0;
				left = NULL;
				right = NULL; 
				
			}
			
			node (int d){
				data = d; 
				left = NULL;
				right = NULL;
			}
};

class bst {
	public:
			node * root;
			bst (){
				root = NULL;
			}
			
			bst(node * n){
				root = n;
			}
			
			bool isempty()
			{
				if (root == NULL)
				{
					return true;
				}
				else {
					return false;
				}
				
			}
			
			void insert(node * n){
				if (root == NULL)
				{
					root = n;
					cout <<" Added as a root" << endl;
				}
				else
				{
					node * temp = root;
					while (temp != NULL)
					{
						if ((n-> data < temp -> data) && (temp -> left == NULL)){
							temp-> left = n;
							cout <<" ADded to the left "<< endl;
							return;
						}
						else if ((n->data > temp->data) && ( temp-> right == NULL)){
							temp -> right = n;
							cout <<" Added to the right "<< endl;
							return ;
						}
						else if (n->data < temp ->data)
						{
							temp = temp-> left;
						}
						else if (n-> data > temp -> data ){
							temp = temp -> right ;
						}
					}
				}
			}
			
			void pre(node *n )//NLR
			{
				if (n == NULL)
				{
					return ;
					
				}
				else
				{
					cout << n->data <<"  ";
					pre(n->left);
					pre(n->right);
				}
			}
			
			void in(node *n )//LNR
			{
				if (n == NULL)
				{
					return ;
					
				}
				else
				{
					
					in(n->left);
					cout << n->data <<"  ";
					in(n->right);
				}
			}
			void post(node *n )//LRN
			{
				if (n == NULL)
				{
					return ;
					
				}
				else
				{
					
					post(n->left);
					
					post(n->right);
					cout << n->data <<"  ";
				}
			}
			
};


int main (){
	bst obj;
	obj.insert(new node (1));
	obj.insert(new node (2));
	obj.insert(new node (3));obj.insert(new node (4));obj.insert(new node (5));
	cout << "\n ";
	obj.pre(obj.root);
	cout<< " \n ";
	obj.in(obj.root);
	cout <<" \n ";
	obj.post(obj.root );
	
	
}







































/*
#include <iostream>
#define SPACE 10
using namespace std;

class node{
	public:
			int data;
			node * left ;
			node * right ;
			
			node ()
			{
				data=0;
				left = NULL;
				right = NULL;
				
			}
			
			node (int d)
			{
				data = d ;
				left = NULL;
				right = NULL;
				
			}
};

class BST {
	
	public:
			node * root;
			
			BST()
			{
				root = NULL;
				
			}
			
			bool isEmpty()
			{
				if (root == NULL)
				{
					return true;
				}
				else{
					return false ;
				}
			}
			
			void insertnode (node * n)
			{
				if (root == NULL)
				{
					root = n;
					cout<<" Data inserted as a root value "<< endl;
				 } 
				 else
				 {
				 	node * temp = root;
				 	
				 	while (temp != NULL)
				 	{
				 		if (n ->data == temp-> data)
				 		{
				 			cout <<" value already exists" << endl;
				 			return;
						 }
						 else
						 {
						 	if ((n->data < temp -> data ) && (temp->left == NULL))
						 	{
						 		temp-> left = n;
						 		cout << " value has been inserted to the left "<< endl;
						 		break;
							 }
							 else if ((n-> data > temp-> data ) && (temp -> right == NULL) )
							 {
							 	temp -> right = n;
							 	cout << " value inserte to the right "<< endl; 
							 	break;
							 }
							 else if (n-> data < temp -> data)
							 {
							 	temp = temp -> left;
							 }
							 else 
							 {
							 	temp = temp -> right ;
							 	 
							 }
						 }
					 }
				 }
			}
			
			
			void pre(node * n)//NLR
			{
				if (n== NULL)
				{
					return ;
				}
				else
				{
					cout <<n->data << " ";
					pre(n->left);
					pre(n->right);
				}
			}
			
			void inorder(node * n)//LNR
			{
				if (n== NULL)
				{
					return ;
				}
				else
				{
					inorder(n->left);
					cout <<n->data << " ";
					inorder(n->right);
				}
			}
				
			void post(node * n)//LRN
			{
				if (n== NULL)
				{
					return ;
				}
				else
				{
					post(n->left);
				
					post(n->right);
					
					cout <<n->data << " ";
				}
			}
			
			void print(node * n, int space )
			{
				if (n== NULL){
					return;
				}
				
				else{
					
				space += SPACE;
				print (n->right, space);
				cout << endl;
				for (int i = SPACE ; i < space ; i++){
					
				
				cout <<"  ";
				cout << n->data << endl;
				print (n-> left , space);
					
					}
			   }
			}
			
};


int main ()
{
	BST obj;
	obj.insertnode(new node(1));
	obj.insertnode(new node(2));
	obj.insertnode(new node(3));
	obj.insertnode(new node(4));
	obj.insertnode(new node(5));
	
	obj.print(obj.root, 5);

	//obj.print(obj.root, 5);
//	cout <<" Preorder ";
//	obj.pre(obj.root);
		//cout <<"\t \n inorder ";
//	obj.inorder(obj.root);
//	cout <<"\t \n post order ";
	//obj.post(obj.root);
}

*/
