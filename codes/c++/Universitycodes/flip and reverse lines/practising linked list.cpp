#include <iostream>
using namespace std ;

class node 
{
	public:
			int data;
			node * next;
			
			node ()
			{
				data = 0;
				next = NULL;
			}
			
			node (int d )
			{
				data = d;
				next=NULL;
			}
			
};

class linkedlist
{
	public:
			node * front ;
			
			linkedlist()
			{
				front  =NULL;
			}
			
			linkedlist (node *n)
			{
				front  =n;
			}
			
			void appendNode (node * n)
			{
				if (front == NULL)
				{
					front = n;
					cout << "apennded"<< endl;
					
				}
				else
				{
					node * ptr = front ;
					while (ptr->next != NULL)
					{
						ptr = ptr->next;
						
					}
					ptr-> next = n;
					//cout <<"done appending "<< endl;
				}
			}
			
		void printlist()
		{
			
			if (front  == NULL)
			{
				cout << "No nodes in the linked list "<< endl;
				
			}
			else
			{
				cout <<"Singly linked list values are ";
			node * temp = front;
			while (temp != NULL)
			{
				cout <<""<< temp->data <<" -> ";
				temp =temp->next;
			}
			
			}
		}
			
	
	
};

void linkedListMystery4(node*& front) {
    node* curr = front;
    while (curr->next != NULL) {
        node* temp = curr->next;
        if (curr->data >= curr->next->data) {
            curr->next = temp->next;
            if (curr->data == temp->data) {
                curr->next = temp->next;
                delete temp;
            } else {
                temp->next = front;
                front = temp;
            }
        } else {
            curr = curr->next;
        }
    }
}
int main ()
{
	linkedlist obj;
	obj.appendNode(new node (5));
	obj.printlist();
	obj.appendNode(new node (10));
	obj.appendNode(new node (1234));
	obj.printlist();
	
}
