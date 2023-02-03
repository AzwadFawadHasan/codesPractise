#include <iostream>
using namespace std ;

class node
{
	public:
			int data;
			node * front ;
			node * rear ;
			node*next ;
			
			node()
			{
				data =0;
				front = NULL;
				rear= NULL;
				next = NULL;
				}	

			
			node(int d)
			{
				data=d;
				front = NULL;
				rear= NULL;
				next=NULL;
				}	
};

class q
{
	public:
			node * front ;
			node * rear ; 
			
			q()
			{
				front =NULL;
				rear =NULL;
				
			}
			
			bool isempty()
			{
				if (front ==NULL && rear == NULL)
				{
					return true;
					
				}
				else
				{
					return false;
				}
			}
			
			void enq(node *n)
			{
				node *temp = NULL;
				if (isempty())
				{
					front =n;
					rear=n;
					cout << "suceess"<< endl;
					
				}
				else
				{
					temp = rear;
					rear =n;
					rear->next = temp;
				//	rear->next=n;
					//rear=n;
						cout << "success"<< endl;
				}
			
			} 
			
			void dq()
			{
				node *temp = front;
				if(isempty())
				{
					cout <<"THe array is empty "<< endl;
				}
				else if (front == rear)
				{
					temp = front ;
					cout<< "deleting "<< temp ->data;
					front =NULL;
					rear=NULL;
					delete  temp;
				}
				else
				{
					temp =front;
					front=front ->next;
					cout <<"deleting "<< temp->data; 
					delete temp;
				}
			}
			void display()
			{node * temp = front;
				if (isempty())
				{
					cout<<"Its empty "<< endl;
				}
				else
				{
						
				cout <<"displaying all "<< endl;
							while (temp!= NULL)
						{
					        cout <<temp->data<<"-> ";
					         temp=temp->next;
						}
				
				}
			
			}
};


int main ()
{
	int data;
	q objq;
//	node * newnode= new node ();
//	data =5;
//	newnode->data = data;
//	objq.enq(newnode);
	
//	objq.dq();
int option;
	node * new_node = new node();
	do
	{
		cout <<"1.isempty 2.eq 3. dequeue 4. dispaly "<<endl;
		
		cin>> option;
		switch(option)
		{
			case 0:
					break;
			case 1:
					cout <<"the linked list is "<<objq.isempty();
					break;
			case 2:
					cout <<"the eq enter the element \n";
					cin>>data;
					
					new_node -> data = data ;
					objq.enq(new_node);
					break;
			case 3:
					cout << "dequinquig"<< endl;
					objq.dq();
					delete new_node;
					break;
			case 4:
					objq.display();
					break;
			default:
					cout << "enter correct number ";
					break;				
							
					
									
		}
		
	}while(option!=0);
}
