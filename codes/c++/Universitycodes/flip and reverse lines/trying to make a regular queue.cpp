#include <iostream>
using namespace std;

class queue
{
	public:
			int data;
			int front ;
			int rear;
			int a[5];
			
			queue()
			{
				data = 0;
				front = -1 ;
				rear = -1;
				
			}
			bool isempty()
			{
				if (front ==-1 && rear == -1)
				{
					return true;
					
				}
				else
				{
					return false ;
					
				}
			}
			
			bool isfull()
			{
				if (rear ==4)
				{
					return true;
					
				}
				else
				{
					return false;
				}
			}
			void en(int dat)
			{
				
				if (isempty())
				{
					front ++;
					rear ++;
					a[rear]=dat;
				
				}
				else if (isfull())
				{
					cout << "queue is full baby "<< endl;
				}
				else
				{
					rear++;
					a[rear]=dat;
					
				}
				
				
				
			}
			
			void dq()
			{
				int dqval;
				if (isempty())
				{
					cout <<" Arrau is empty "<< endl;
				}
				else if (rear==0 && front ==0)
				{
					dqval = a[front];
					front--;
					
					rear--;
					cout << dqval <<"Removed ";	
				}
				else
				{
					dqval = a[front];
					//rear--;
					front ++;
					cout << dqval <<"Removed ";
				}
			}
			
			void display ()
			{
				cout <<"Dispal ing "<< endl;
				for (int i =front; i <= rear; i++)
				{
					cout <<a[i]<< "  ";
					
				}
			}
			
		
	
};

int main ()
{
	queue qobj;
	int data;
	int option;
	do 
	{
		cout <<"Menu\n 1. is empty 2. is full  3.en 4. dq. 5. dis"<< endl;
		cin>> option;
		switch(option)
		{
			case 0:
					break;
			case 1:
					cout <<" the array is "	<< qobj.isempty();
					break;
			case 2:
					cout <<" the arraus is  "<< qobj.isfull();
					break;
			case 3:
					cout <<"enter the element you want to enter "<< endl;
					cin>> data;
					qobj.en(data);
					break;
			case 4:
					qobj.dq();
					break;
			case 5:
					qobj.display();
					break;
					
			default:
				 	cout <<" enter valid option "<< endl;									
		}
	}while (option != 0);
}
