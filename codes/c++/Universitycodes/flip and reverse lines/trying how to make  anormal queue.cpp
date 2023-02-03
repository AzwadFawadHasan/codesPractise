#include <iostream>
using namespace std ;


class q
{
	private:
				int data ;
				int f;
				int b;
				int a[5];
	
	public:
				q ()
				{
			     	int data;
				 int f=-1;
				 int b=-1;
				   for (int i =0 ; i< 5 ; i ++)
				  {
					a[i]= 0;
				}  
				
				}
			
		
			bool isempty()
			{
				if (f==-1)
				return true;
				else
				return false ;
			}
			bool isfull ()
			{
				if (b==5-1)
				return true;
				else
				return false;
				
			}
				void eq(int val)
			{
				if(isfull())
				{
					cout <<"Queue is full "
					<< endl;
					return;
					
				}
				
				else if (isempty())
				{
					b=0;
					f=0;
					
					a[b]=val;
				}
				else
				{
					
					b++;
					if (b==0)
					{
						f++;
						
					}
					a[b]=val;
							
					
				}
			}
			
			int dq()
			{
				//  if (isfull())
				if(isempty())
				{
					cout <<"Stack is empty ; "<< endl;
					b=0;
					f=0;
					
				}
				else
				{
					int dqval = a[b];
					
					b--;
					if (b==-1)
						{
							f=-1;
						}
						
						return dqval;
					
				}
			}
			void display()
			{
				for (int i = 0 ; i < 5 ; i++)
				{
					cout <<a[i]<<" ";
					
				}
			}
			
	
};

int main ()
{
	q o;
	//o.eq(5);
	o.isempty();
	
}

