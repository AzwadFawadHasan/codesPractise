#include <iostream>
using namespace std;

class node 
{
public:	
		int data;
		node * next;
		node()
		{
			data=0;
			next =NULL;
			
			}	
			
		node(int d)
		{
			data = d ;
			next = NULL;
		 } 
		 
		 
};

class queue 
{
	public:
			node * front ;
			node * rear ;
			queue()
			{
				front= NULL;
				rear=NULL;
				
				}	
		
			bool isempty()
			{
				if (front == NULL && rear== NULL)
				{
					return true;
				}
				else
				{
					return false;
				}

			}
			
			void en(node *n)
			{
				node * temp = NULL;
				if(front ==NULL)
				{
					front =n;
					rear=n;
					
				}
				else
				{
					rear -> next = n;
					rear =n;
					cout <<" Enqueue successfull "<< endl;
					
				}
			}
			
			void deq()
			{
				node * temp = NULL;
				if (isempty())
				{
					cout <<" queue is empty "<< endl;
				}
				else if (front == rear)
				{
					temp= front;
					front =NULL;
					rear = NULL;
					delete temp ;
					
					
				}
				else
				{
					temp = front ;
					front=front->next
					;
					cout <<temp -> data <<"deleted "<< endl;
					delete temp;
					
				}
			}
			
			void display()
			{
				if (isempty())
				{
					cout <<" empty "<< endl;
					
				}
				else
				{
					node * temp = front ;
					while(temp!=NULL)
					{
						cout<<temp->data << "-> ";
						temp = temp->next ;
					}
					cout << endl;
				}
			}
};



int main ()
{
	int data;
	queue objq;
//	node * newnode= new node ();
//	data =5;
//	newnode->data = data;
//	objq.enq(newnode);
	
//	objq.dq();
int option;
	
	do
	{
		cout <<"1.isempty 2.eq 3. dequeue 4. dispaly "<<endl;
		
		cin>> option;
		node * new_node = new node();
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
					objq.en(new_node);
					break;
			case 3:
					cout << "dequinquig"<< endl;
					objq.deq();
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
