#include <iostream>
using namespace std ; 


int size = 5;
int a[5];
int top =-1;

void push (int val)
{
	if (top==size-1)
	{
		cout << "stack is full " << endl;
	}
	else
	{
		top++;
		a[top]=val;
		cout <<"Value pushed at "<<top << "is "<<a[top]<< endl;
	}
	
}

void pop()
{
	if (top ==-1)
	{
		cout <<"Stack is empty its underflow "<< endl;
		
	}
	else 
	{
		int popval = a[top];
		a[top]= 0;
		cout << "Value that has been popped from the stack is "<< popval << endl;
		top--;
	}
	
}
void display()
{
	for (int i = size-1; i >=0; i--)
	{
		cout <<a[i]<< endl;
	}
 } 


int main ()
{
	
	//stack
	int option=100;
	while(option!=0){
	
	cout <<"1.pop \n 2. push 3. display \n"<<endl;
	cin>>option;
		switch(option)
	{
		
		case 0:
				cout <<"Exiting \n";
				break;
		case 1:
				cout << "Popping the lastmost element from the stack "<< endl;
				pop();
				break;
				
		case 2: 
				cout <<"Enter the value you want to push \n ";
				int x;
				cin>>x ;
				push(x);
				break;
		case 3 : 
				cout <<"Displyaing all the stack elements \n ";
				display();
				break;
		default:
				cout <<"enter the proper ooption the option you entered is invalied";
				break;			
		
		
			}
	
}
	}

		

