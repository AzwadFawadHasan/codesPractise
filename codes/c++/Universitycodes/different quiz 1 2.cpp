#include <iostream>
using namespace std ;
/*
#include <iostream> 
using namespace std; 
  
struct Point { 
    int x, y; 
}; 
  
int main() 
{ 
    struct Point p1 = { 1, 2 }; 
  
    // p2 is a pointer to structure p1 
    struct Point* p2 = &p1; 
  
    // Accessing structure members using 
    // structure pointer 
    cout << p2->x << " " << p2->y; 
    return 0; 
}
*/


class node
{
	public:
			int data;
			node * next;
};

void printlist (node*n)
{
	while (n!=NULL)
	{
		cout << n -> data << " ";
		n=n->next;
	}
}

int main ()
{
		node* head = NULL;
		node *second = NULL;
		node *third = NULL;
		
		head = new node();
		second = new node ();
		third = new node ();
		
		head -> data = 1;
		head -> next = second ;
		
		second ->data = 2; 
		second -> next = third ;
		
		third -> data = 3;
		third -> next = NULL;
		
		printlist  (head);
		

	
}

