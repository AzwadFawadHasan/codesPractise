#include <iostream>
using namespace std ;

int power (int b , int e)
{
	
	if (e!=0)
	{
		return b* power (b, --e);
		
	}
	else 
	{
		return 1;
	}
}

int main ()
{
	 int b = 3;
	 int e = 4
	 ;
	cout << power (b,e);
}
