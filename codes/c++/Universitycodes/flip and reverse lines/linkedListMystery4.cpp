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
				//n
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
	
	int d ;
	linkedlist s;
	node* n1= new node();
	d=25;
	n1->data = d ;
	s.appendNode(n1);
//node * front = n1;
	
	
	//s.printlist();
	node* n2= new node();
	n2->data = 40;
	s.appendNode(n2);
	//s.printlist();
	
	node* n3= new node();
	n3->data = 50;
	s.appendNode(n3);
	//s.printlist();
	
	node* n4= new node();
	n4->data = 20;
	s.appendNode(n4);
//	s.printlist();
	
	
	
	node* n5= new node();
	n5->data = 50;
	s.appendNode(n5);
	//s.printlist();
	
	node* n6= new node();
	n6->data = 10;
	s.appendNode(n6);
//	s.printlist();
	
	node* n7= new node();
	n7->data = 8;
	s.appendNode(n7);
//	s.printlist();
	
	node* n8= new node();
	n8->data = 60;
	s.appendNode(n8);
//	s.printlist();
	
	node* n9= new node();
	n9->data = 60;
	s.appendNode(n9);
//	s.printlist();
	
	node* n10= new node();
	n10->data = 37;
	s.appendNode(n10);
	//s.printlist();

	s.printlist();
	linkedListMystery4(s.front);
	cout << endl;
	s.printlist();
	
	
}
