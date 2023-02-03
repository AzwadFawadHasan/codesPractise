/*#include <iostream>
using namespace std;

struct node {
	int data ;
	node * left;
	node * right;
};



node* newnode(int data){
	node * newnode = new node();
	newnode -> data = data;
	newnode -> left = newnode -> right = NULL;
	return newnode;
}

 node * insert (node * root, int data)
 {
 	if (root == NULL){
 		root = newnode(data);
 	
	 }
	 else if (data <= root -> data){
	 	root-> left = insert (root->left , data);
	 }
	 else{
		root -> right = insert(root-> right , data);
	 }
	 	
		 
	return root;
 }

int main()
{
	node * root ;
	root = NULL;
	root = insert (root, 15);
}*/

#include <iostream>
using namespace std ;

struct node { 
	int data ;
	node * left;
	node * right;
};

node* newnode(int d){
	node * newnode = new node ();
	newnode -> data = d ;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
};



node* insert(node * root, int data){
	if (root == NULL)
	{
		root  = newnode(data);
	}
	else if (data< root->data){
		root-> left = insert(root->left, data);
		
	}
	else if (data>root->data){
		root ->right = insert (root -> right , data );
		
	}
	return root;
	
}

void inorder (node * root){
	//lNR
	if (root == NULL)
	{
		return ;
		
	}
	inorder (root->left);
	cout<<root->data << " ";
	inorder (root->right);
}


void bstContains(node* root, int value) {
node * temp = NULL;
node * p    = NULL;
node * s    = root;
static int store =0;

            if (root == NULL)
            {
                return ;}
            if (root->data == value){
            	p=root;
                 if (root->left !=NULL)
                 {
                 	temp = root->left;
                 	while(temp->right !=NULL)
                 	{
                 		temp = temp ->right;
					 }
					 cout << temp->data;
				 }
				else{
					while (p->data != s->data )
					{
						if (p->data > s->data){
							 store= s ->data;
							s=s->right;		
						}
						else{
							s=s->left;
						}
					}
					cout << store;
				}
				}
            if ( value< root->data)
            { return bstContains(root->left, value);}
            else
            {return bstContains(root->right, value);}
	
}

int main (){
	struct node *root = NULL;
   root = insert(root, 50);
   root = insert(root, 30);
   root = insert(root, 20);
   root = insert(root, 40);
   root = insert(root, 70);
   root = insert(root, 60);
   root = insert(root, 80);
   printf("Inorder traversal of the given tree \n");
   inorder (root);
   cout <<" find pre"<<" "; 
   //findpre(root, 20);
   bstContains(root, 70);
}
