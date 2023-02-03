#include <iostream>
using namespace std;

class node 
{
	public:
			int data;
			node * next;
			
			node()
			{
				data = 0;
				next = NULL;
			}
			node (int d)
			{
				data= d; 
				next = NULL;
			}
	
	
};

class stack 
{
	public:
			node * top;
			
			stack(){top = NULL;}
			
			bool isempty ()
			{
				if (top==NULL){
				return true;	
				}
				
				else 
				{
					return false ;
				}
				
			}
			
			void push (node *n)
			{
				node * temp= NULL;
				if(isempty())
				{
					temp= top;
					top=n;
					cout <<"NOde pushed  "<< endl;
					
				}
				else
				{
					temp = top;
					top =n;
					n->next =temp;
					cout << "Node has been pushed in "<< endl;
				}
			}
			
			void pop()
			{
				if (isempty())
				{
					cout <<"Stack is empty  "<< endl;
				}
				else
				{
					node *temp = top;
					top =top->next;
					cout<< temp->data <<"Has been deleted "<<endl;
					delete temp;
				}
			}
			
			void display()
			{
				if (isempty())
				{
					cout <<"STack is empty"<< endl;
					
				}
				else
				{
					while (top!=NULL)
					{
						cout << top->data <<"->";
						top=top->next;
					}
					
				}
			}
			
			
};

int main ()
{
	stack sobj;
	int o,d;
	
	do
	{
		cout <<"Stack menu \n 1. push  \n 2. is empty \n 3. pop 4.\n dispaly ";
		cin>>o;
		
		node * new_node =new node();
		
		
		switch (o)
		{
			case 0 :
					break;
			case 1 : 
					cout <<"Enter val you want to push in "<< endl;
					cin>>d;
					new_node -> data = d;
					sobj.push(new_node);
					break;	
					
			case 2: 
					cout <<"showing whether the stack is empty"<< endl;
					cout <<endl;
					cout << "\n\t";
					cout <<sobj.isempty();
					cout <<endl;
					break;
			case 3:
					cout <<"Poing "<< endl;
					sobj.pop();	
					break;
			case 4:
					cout <<"Displaying "<< endl;
					sobj.display();
					break;
						
			default:
      				cout << "Enter Proper Option number " << endl;				
		}
		
		
	}while (o!=0);
}
