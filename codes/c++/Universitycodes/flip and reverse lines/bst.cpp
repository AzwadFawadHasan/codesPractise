#include <iostream>
#define SPACE 10

using namespace std;

class TreeNode{
	public:
			int value;
			TreeNode * left;
			TreeNode * right;
			
			TreeNode()
			{
				value = 0;
				left= NULL;
				right =NULL;
				
			}
			TreeNode(int v)
			{
				value = v; 
				left = NULL;
				right =NULL;
				
			}
			
};

class BST {
	public:
			TreeNode * root;
			
			BST ()
			{
				 root = NULL;
			}
			
			
			bool isEmpty()
			{
				if (root == NULL)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			
			void insertNode (TreeNode * new_node)
			{
				if (root == NULL)
				{
					root = new_node;
					cout<< " data inserted as a root value "<< endl;
				}
				
				else
				{
					 TreeNode * temp = root ;
					 
					 while (temp!= NULL)
					 {
					 	if (new_node ->value == temp -> value)
					 	{
					 		cout <<" Value already exists "<< endl;
					 		cout <<" Insert another value "<< endl;
					 		return ;
						 }
						 
						else if ((new_node -> value < temp -> value ) &&  (temp ->left == NULL))
						{
							
							temp -> left = new_node;
							cout <<" value has been inserted to the left  "<< endl;
							break;
						}
						
						else if ((new_node ->value > temp->value) && (temp -> right ==NULL) )
						{
							temp-> right = new_node;
							cout <<" value has been inserted  to the right"<< endl;
							break; 
						}
						
						else if (new_node -> value < temp -> value )
						{
							temp = temp->left;
							
						}
						else
						{
							temp= temp->right;
						}
					
					
					
					 }
				}
				
			}
			
			void print(TreeNode * r, int space )
			{
				if (r== NULL)
					return;
				space += SPACE;
				print (r->right, space);
				cout << endl;
				for (int i = SPACE ; i < space ; i++)
				cout <<"  ";
				

				cout << r->value << endl;
				print (r-> left , space);
				
			}
			
			void printPreorder (TreeNode * r) // NLR
			{
				if (r == NULL)
				{
					return ;
				}
				else
				{
					cout << r-> value <<" " ;
					printPreorder (r->left);
					printPreorder (r->right);
					
					 
				}
			}
			
			void printInorder (TreeNode * r) // LNR
			{
				if (r== NULL)
				{
					return;
				}
				else
				{
					printInorder (r-> left);
					cout << r-> value << " ";
					printInorder(r-> right);
					
				}
			}
			void printPostorder (TreeNode * r)
			{
				if (r== NULL)
				return ;
				printPostorder (r->left);
				printPostorder (r-> right );
				cout << r-> value << " ";
			}
};

int main ()
{
	int option, val ;
	BST obj;
	
	
	do 
	{
		cout <<" what option do you want to perform "<< endl;
		cout<<"\t select option \n 1. insert node \n 2. search node \n 3. delete node \n 4. print bst values \n 5. Clear Screen \n 0. Exit program \n"<< endl;
		cin >> option ;
		TreeNode * new_node = new TreeNode();
		
		
		switch (option)
		{
			case 0:
					break;
			case 1:
					cout <<" INsert "<< endl;
					cout <<"Enter the value of the new node that is to be inserted to the BST "<< endl;
					cin>> val;
					new_node -> value = val;
					obj.insertNode(new_node);
					break;
			case 2: 
					cout <<"search "<< endl;
					break;
			case 3:
					cout <<" delete"<< endl;
					break;
			case 4 : 
					cout <<" Print and traverse "<< endl;
					obj.print(obj.root, 5);
					cout <<"Printing preorder \n"<< endl;
					obj.printPreorder(obj.root);
					cout <<" Printing preorderr done \n "<< endl;
					cout << endl;
					cout <<" Printing Inorder \n" << endl;
					obj.printInorder(obj.root);
					cout <<" finshied printing inorder \n "<< endl;
					cout << endl;
					cout <<" Printing post order "<< endl;
					obj.printPostorder(obj.root);
					cout <<" finished rpintnig postorder "<< endl;
					cout << endl;
					
					break;
					//1 30 1 18 1 10 1 25 1 45 1 65
			case 5:
					cout <<" clearing screen"<< endl;
					system("cls");
					break;
			default:
					cout <<" Enter proper option "<< endl;													
		}
		
	}while (option != 0);
	
	
}
