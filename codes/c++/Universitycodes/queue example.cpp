#include <iostream>
using namespace std ;

class Queue
{
	private:
			int front ;
			int rear ;
			int arr[5];
	public :
		Queue()
		{
			front =-1 ;
			rear = -1;
			for (int i=0; i < 5; i++ )
			{
					arr[i]=0;
			}
				
					
					}
		
		bool isEmpty()
		{
			if 	(rear ==-1 && front ==-1)
			{
				return true;
			}
			else 
			return false ;
					}			
		
		isfull()
		{
			if (rear == sizeof(arr)-1 )
				{
					return true;
				}
				
			else {
				return false ;
			}
								}
								
		
		void enqueue(int val)
		{
			if (isfull())
			{
				cout <<"queue is full \n ";
				return;
			}
			
			else if (isEmpty())
			{
				rear = 0;
				front =0;
				arr[rear]=val;
			}
			else
			{
				rear++;
				arr[rear]=val;
			}
					
			
		}
		
		
		int dequeue()
		{
			if (isEmpty())
			{
				cout <<"Queue is empty"<<endl;
				return 0;
			}
			if (front == rear)
			
			{
				int x =0;
				x =arr[front ];
				rear =-1;
				front =-1;
				arr[front ]=0;
				return x;
			}
			else 
			{
				int x=0;
				x= arr[front ];
				arr[front]= 0;
				front ++;
				return x;
				
			}
			
		
	}
	
	    int count ()
	    {
	    	return (rear-front +1);
		}
		
		void display()
		{
			for (int i=0; i<5 ; i++)
			{
				cout<<arr[i]<<" ";
			}
		}
};



int main ()
{
	int option,val;
	Queue q;
	do 
	{
		cout <<"What do you want to perform \n " ;
		cout <<"1. enqueue  \n 2 . dequeue . \n 3. is empty \n 4. is ful \n 5 count \n 6 display \n 7 clear screen \n";
		cin >> option;
		
		switch (option)
		{
			case 0 :
				break;
			case 1:
				cout <<"Enter wht you want to enqueue\n ";
				cin>>val;
				q.enqueue(val);
				
					break
					;
			case 2:
				cout <<"dequeing the first elemnt that got in "<<q.dequeue()<<endl;	
					break;
			case 3 :
					if(q.isEmpty())
					cout<<"Is empty"<<endl;
					else 
					cout <<"NOt emtpy"<<endl; 
					break;
			case 4: 
			
					if (q.isfull())
					{
						cout <<"is full \n";
						
					}
					else 
					cout <<"is not full ";
					break;
			
			case 5 : 
					cout <<"the number of elements in the queue "<<q.count()<<endl;
					break;
			
			case 6: 
				cout <<"displaying the elements in the queue \n";
				q.display()
				;
					
					break;
			case 7:
					
					cout <<"clearing "<<endl;
					system("cls");
																	
		}
	}while (option!=0);
	
	
}
