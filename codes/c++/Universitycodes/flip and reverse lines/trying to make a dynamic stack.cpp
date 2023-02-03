#include <iostream>
using namespace std ;

class dynamicstack
{
	private:
			struct node
			{
				int val;
				node * next; 
				
				node (int value, node * next =NULL)// struct constructor
				{
					this ->val = value ;
					this -> next = next ;
				}
			};
			
			node *top;
			
	public:
			dynamicstack()// constructor;
			{
				top=NULL;
				
					}		
		
		
			void push(int val)
			{
				top =new node (val, top);
					}	
			
			int pop ()
			{		int number = top-> val ; // getting the top value
					node * temp = top;//creating a temp node pointer so we can deletee it 
					top = top->next ;// reassigning the top value ;
					delete temp; // delete the old address 
					return number;
				
						}
						
			bool isEmpty()
			{
				if (top == NULL)
				{
				return true; 
				}
				else
				{
				return false;
				}
									}						
	
};


int main ()
{
	dynamicstack s;// automatically calls the default constructor 
	s.push (5);
	s.push(8);
	s.push (6);
	
	cout << s.pop() << endl;
}
