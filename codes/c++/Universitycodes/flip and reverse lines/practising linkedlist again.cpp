#include <iostream>
using namespace std ;

class node 
{
public:	
	   int data ;
	   node * next ;
	     node ()
	{
		data =0;
		next = NULL;
	}
	    node (int d)
	{
		data = d;
		next = NULL;
	}
};

class linkedlist
{
	public:
			node * front;
			
			linkedlist()
			{
				front =NULL;
			}
			
			linkedlist(node*n)
			{
				front = n;
			}
			void add(node *n)
			{
				if (front ==NULL)
				{
					front = n;
				}
				else
				{
					node *temp=front;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					
					temp->next=n;
				}
			}
			
			void display()
			{
				if(front ==NULL)
				{
					cout<<"empty"<<endl;
				}
				else
				{
					node * temp = front ;
					while (temp!=NULL)
					{
						cout <<temp->data <<" -> ";
						temp = temp -> next;
					}
				}
			}
	
};

void linkedListMystery(node*& front) {
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
	obj.add(new node(25));

	obj.add(new node(40));
	obj.add(new node(50));
	obj.add(new node(20));
	obj.add(new node(50));
	obj.add(new node(10));
	obj.add(new node(8));
	obj.add(new node(60));
	obj.add(new node(60));
	obj.add(new node(37));
	obj.display();
	cout<< endl;
	
	linkedListMystery(obj.front) ;
	obj.display();
	
}
