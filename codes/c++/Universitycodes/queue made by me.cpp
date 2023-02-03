#include <iostream>
using namespace std ;

int front =-1;
int rear =-1;
int a[5];

void enq(int val)
{
	if (rear == 4)
	{
		cout <<"Que is full "<< endl;
	
	}

	else if (front == -1 && rear== -1)
	{
		front++;
		rear++;
		a[rear]= val;
		cout <<"Value entered at "<< rear << "is  "<< a[rear]<< endl;
	}
	else
	{
		rear++;
		a[rear]= val;
		cout <<"Value entered at "<< rear << "is  "<< a[rear]<< endl;
	}
}

void deq()
{
	if (front ==-1 && rear ==-1)
	{
		cout <<"Que is empty "<< endl;
	}
	else
	{
		int x = a[front];
		front ++;
		cout << "value that was removed from the queue is " << x << endl;
		
	}
}

void display ()
{
	cout <<" the queue is "<< endl;
	for (int i =front ; i < 5 ; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main ()
{
	
		int option = 111;
	while (option !=0)
	{
		
	cout <<"THe queue menu \n 1. enqueue \n 2. dequeue \n 3. display  \n  999. exit "<< endl;

	cin >> option;
	switch (option)
	{
		case 0: 
				cout <<"exitting "<< endl;
				return 0;
				break;
		case 1:
				cout << "enter a value to enqueu"<< endl;
				int x ;
				cin>> x ;
				enq(x);		
				break;
		case 2: 
				cout << "you have chosen to d3queu"<< endl;
				deq();
				break;
		case 3: 
				cout <<" You have chosen to display the elements inside the queue" << endl;
				display();
				break;
		case 4:
		 		cout <<"Clearing the screen"<< endl;
				 system("cls")	;
				 break;	
		default:
				cout <<"Enter correct option "
				<< endl;
				break;
							
	}
	
	
}
}
