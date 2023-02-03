#include <iostream>
using namespace std;

class node {
	public:
			int data ;
			node * next;
			
			node ()
			{
				data = 0;
				next = NULL;
			}
			
			node (int d)
			{
				data = d;
				next = NULL;
			}
};

class sll{
	public:
			node * front ;
			
			sll ()
			{
				front = NULL;
			}
			
			sll (node * n)
			{
				if (front == NULL)
				{
					front = n;
				}
			}
			
			void add (node * n)
			{
				if (front == NULL)
				{
					front = n;
				}
				else
				{
					node * temp = front ;
					
					/*while (temp!= NULL)
					{
						temp = temp->next;
					}
					temp = n;*/
					while(temp->next != NULL)
					{
						temp= temp->next;
						
					}
					temp->next =n;
					
				}
			}
			
			void display ()
			{
				if (front == NULL)
				{
					cout <<"   "<< endl;
				}
				else
				{
					node * temp = front ;
					while (temp !=NULL)
					{
						cout <<temp->data << " -> ";
						temp = temp->next;
					}
					cout <<"\b\b\b\b    ";
				}
			}
};


void insertByVal (node * &front)
{
		node * ptr = front;
		node * temp = front; 
		
		while (ptr-> next!=NULL)
		{
			if (ptr -> data > ptr -> next -> data)
			{
				temp = ptr;
				ptr = ptr -> next ;
				ptr-> next = temp;
				
			}
		//	ptr=ptr->next;
		}
}


int main ()
{
	sll obj;
	//node * f = new node (10);
	//obj.front = f;
	//obj.add(f);
	obj.add(new node (90));
	obj.add(new node (10));
	obj.add(new node (80));
	obj.add(new node (5));
	obj.add(new node (60));
	obj.add(new node (55));
	obj.add(new node (47));
	obj.add(new node (58));
	obj.add(new node (60));
	
	
		
		
	obj.display();
	//cout <<"\n "<< obj.front -> data ;
	insertByVal (obj.front);
	cout << endl;
	obj.display();
}
