#include <iostream>
using namespace std ;


class Stack {
	
	private :
		int top;
		int arr[5];

	public:
		Stack()
		{
			top=-1;
			for (int i = - 1; i< 5 ;i++)
			{
				arr[i]=0;
			}
		}
		
		bool isEmpty()
		{
			if (top==-1)
			{return true;
			}
			else 
			return false;
		}
		
		bool isfull ()
		{
			if (top==4)
			{
				return true ;
				
			}
			else 
			return false;
			
		}
		
		void push(int val)
		{
			if (isfull())
			{
				cout <<"Stack is full stack overflow"<<endl;
				
			}
			else
			{
				top++;
				arr[top]= val;
			}
		}
		int pop ()
		{
			if (isEmpty())
			{
				cout <<"Stack is empty stack underflow "<<endl;
				return 0;
			}
			else
			{
				int popval= arr[top] ;
				arr[top]=0;
				top--;
				return popval;
			}
			
		}
		int count ()
		{
			
			return top+1;
			
		}
		int peek(int pos)
		{
			if (isEmpty())
			{
				cout <<" stack is empty "<<endl;
			}
			else
			{
				int peekval = arr[pos];
				return peekval;
			}
		}
		void change (int val, int pos)
		{
			arr[pos]=val;
			cout <<"value is changed \n "<<endl;
		}
	
	void display()
	{
		for (int i=top; i >=0; i --)
		{
			cout <<arr[i]<<endl;
		}
	}
	
};






int main ()
{ 
		//push
		// pop
		// is empty
		// is full
		// peek
		// count
		// change 
		// display
			int option ;
			int item;
			int pos;
		Stack s;
		do {
		
		cout <<"Menu " <<endl;
		
		cout <<"1.push \n 2. pop \n 3. isempty \n 4. is full \n 5. peek \n 6. count \n 7. change \n 8 . display \n  "<< endl;
		cout <<"if you want to exit press 0 \n " << endl;
	
		cin>> option;
		switch (option)
		{
			case 1:
				cout <<"You have chosen to push an item , enter your item \n"<<endl;
				cin>>item;
				s.push(item);
				break;
			
			case 2:
					cout <<"pOp called ";
					s.pop();
					cout <<"Item popped is " <<s.pop()<<endl;
					break;
			case 3: 
					if (s.isEmpty())	
					{cout <<"Stack is empty";
					
							}	
							
							else 
							{cout <<"Stack is not emptuy";
			
			
							}
								break;	
							
			case 4 :
					if (s.isfull())	
					{
						
						cout <<"Its full " << endl;
								}			
								else 
								{
									cout <<"Its empty "<< endl;
									
								
								}
									break;
								
			case 5:
					cout <<"Enter the postion of Item you want to peek"<<endl;
					
					cin>>pos;
					cout <<s.peek(pos);
						break;
					
			case 6:
					cout <<"the count is "<< s.count()<<endl;
						break;
			
			case 7:
					cout <<"Change funcion is called "<<endl;
					cout <<"enter the poston you want to change "<<endl;cin>>pos;
					cout <<"Enter the number you want to give "<<endl;
					cin>> item;
					s.change(item , pos);
					cout <<"Item at "<< pos <<"Has been changed to " << item<<endl;
						break;
			case 8:
				cout <<"\n\n\n"<<endl;
				s.display();
				break;
			case 9:
				system("cls");
				break;
			default:
					cout << "Enter proper option "<< endl; 
				
							
								
									
		}
		
		
	}while(option!=0);

		
		
}
