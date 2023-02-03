#include <iostream>
using namespace std;

class treenode {
	public:
			int data;
			treenode * left;
			treenode * right;
			
			treenode(){
				data = 0;
				left = NULL;
				right = NULL;
				
			}
			treenode(int d){
				data = d;
				left = NULL;
				right = NULL;
			}
			
};

class bst {
	
	public:
			treenode * root;
			
			bst (){
				root= NULL;
				
			}
			
			bst (treenode * n){
				root =  n;	
			}
			
			void insert(treenode* n)
			{
				if (root == NULL)
				{
					root = n;
					cout <<" ENtered as a root value "<< endl;
				}
				
				else{
						treenode * temp = root;
						
						while (temp != NULL){
												
												if (n->data == temp->data){
													cout <<" Already present "<<endl;break;
													
												}
												
												else if ((n->data > temp->data) && (temp->right == NULL))
												{ 
													temp-> right = n;
													cout <<" entered to the right "<< endl;;
													break;
												}
												
												else if ((n->data < temp-> data) && ( temp -> left == NULL)){
													temp->left = n
													; cout <<" entered to the left "<< endl; break;
												}
												
												else if (n->data < temp-> data){
													 temp = temp -> left;
												}
												else
												{
													temp = temp-> right;
												}
						}
				}
			}
			
			void pre(treenode * n )
			{
				if (n == NULL)
				{
					return ;
				}
				else{
					cout <<n->data <<" ";
					pre(n->left);
					pre(n->right);
					
				}
			}
			
				void inorder(treenode * n )
			{
				if (n == NULL)
				{
					return ;
				}
				else{
					
					inorder(n->left);
					cout <<n->data <<" ";
					inorder(n->right);
					
				}
			}
			
			void post(treenode * n )
			{
				if (n == NULL)
				{
					return ;
				}
				else{
					
					post(n->left);
					post(n->right);
					cout <<n->data <<" ";
					
					
				}
			}
		
		void minval(treenode *n)
		{
			if (n== NULL)
			{
				return;
			}else
			{
				treenode * temp = n;
				while(temp->left !=NULL)
				{
					temp= temp->left;
				}
				cout << " the smallest value is "<< temp->data;
			}
				
			
			}	
			
		void maxval(treenode *n)
		{
			if (n== NULL)
			{
				return;
			}else
			{
				treenode * temp = n;
				while(temp->right !=NULL)
				{
					temp= temp->right;
				}
				cout << " the largerst  value is "<< temp->data;
			}
				
			
			}
};

int main (){
	bst a;
	
	a.insert(new treenode (2));
	a.insert(new treenode (1));
    a.insert(new treenode (4));
    a.insert(new treenode (3));
	a.insert(new treenode (5));
	
	cout <<" preorder : "<<endl; 
	a.pre(a.root);
	cout <<"\n inorder : "<<endl;
	a.inorder(a.root);
	cout <<"\n postorder: "<<endl; 
	a.post(a.root);
	cout<<endl;
    a.minval(a.root);
    cout<<endl;
    a.maxval(a.root);
}
