#include <iostream>
using namespace std ;

class stack 
{
	private:
			int top;
			int a[5];
	
	public:
			
			stack()
			{
				top = -1;
				for (int i =0 ; i< 5 ; i++)
				{
					a[i]=0;
				}
			}
			
			
			bool isEmpty()
			{
				if (top==-1)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			
			bool isFull()
			{
				if (top==4)
				return true
				;
				else
				return false;
				
			}
			
			void push(int val)
			{
				if (isFull())
				{
					cout <<"Stack is full "<< endl;
				}
				else
				{
					top++;
					a[top]= val;
					cout <<"value pushed into the stack";
				}
			}
			
			int pop()
			{
				if (isEmpty())
				{
					cout <<"Stack is already empty "<< endl;
				}
				else
				{
					int popval=a[top];
					a[top]=0;
					top--;
					return popval;
				}
			}
			
			void count()
			{
				cout << top+1;
			}
			
		int peek(int pos)
		{
				
				if (isEmpty())
				{
					cout << "stack is empty "<< endl;
					return 0;
				}
				else
				{
					int peekval = a[pos];
			     	return peekval;
				}
				
			
			
		}
		
			
			void display ()
			{
				cout <<" All values in the stack are as follows \n";
				for (int i = 0 ; i  < 5 ; i++)
				{
					cout <<a[i]<<" ";
				}
				cout << endl;
			}
}
;




int main ()
{
	stack obj;
	obj.push(32);
	obj.push(12214);
	obj.push(99);
	obj.push(124);
	obj.display();
	obj.pop();
	
	
}
