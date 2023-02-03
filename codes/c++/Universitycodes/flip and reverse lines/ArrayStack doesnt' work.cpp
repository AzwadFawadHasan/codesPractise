#include <iostream>
using namespace std ;


class ArrayStack
{
	public:
			int data ;
			int top;
			int a[5];
			ArrayStack()
			{
				top=-1;
				for (int i = 0 ; i< 5; i++)
				{
					a[i]=NULL;
				}
			}
			bool isEmpty()
			{
				if (top==-1)
				{
					return true ;
					
				}
				else 
				{
					return false ;
				}
			}
			
			void push(int val)
			{
				if(top==4)
				{
					return;
				}
				else
				{
						top++;
					a[top]=val;
				}
			}
			
			int pop()
			{
				if (isEmpty())
				{
					return ;
				}
				else
				{
					int x;
					x= a[top];
					top--;
					return x;
				}
			}
			void peek()
			{
				if (isEmpty())
				{
					return ;
				}
				else
				{
					int x = a[top];
					return x;
				}
			}
			
			int size()
			{
				int x=0;
				if (isEmpty())
				{
					
					return x;
				}
				else
				{
					x=top+1;
					return x;
				}
			}
			
			void operato()
			{
				cout <<"{";
				for (int i =0 ; i<=4 ; i++)
				{
					cout << a[i]<<" ";
				}
				cout <<"\b }"<<endl;
			}
			
			
	
};


int main ()
{
	
	
}
