#include <iostream>
using namespace std ;


struct node 
{
	int data ;
	node *next ;
};


class stack 
{
	node *top;
	
	public:
			stack()//constructor 
			{
				top = NULL;
				node *next = NULL;	
			}
			
			void push();
			void pop();
			void display();
			~stack();// destructor
			
};

void stack:: push()
{
	node *temp;
	temp = new node;
	cout << " enter the number you want to enter "<< endl;
	int x;
	cin >>x; temp -> data= x ;
//	temp->data = x;
	temp->next = top;
	top=temp;
}

void stack:: pop()
{
	if (top!=NULL)
	{
		node *temp = top;
		top= top -> next;
		cout <<  temp->data << "deleted " ;
		delete temp;
	}
	else
	cout <<"Stack is empty ; \n ";
}

void stack::display()
{
	node *temp=top;
	while(top!=NULL)
	{
		cout <<top->data<<
		" ";
		temp = temp->next;
		
		delete top;
	}
}

stack::~stack()
{
	while(top!=NULL)
	{
		node *temp=top;
		top =top ->next;
		delete temp;
	}
}
int main ()
{
	char ch;
	stack st;
	do 
	{
		cout <<"Stack options \n P for push \n O for pop \n d for display \n";
		cin>> ch;
		switch(ch)
		{
			case 'P':st.push();break;
			case 'O':st.pop(); break;
			case 'd':st.display();break;			 
			
		}
		
	}while(ch!='q');
}
