#include <iostream>
using namespace std ;

void printBinary(int n)
{
	if (n==0)
	{
		cout <<0;
		return;
	}
	else
		{
			if (n>0 && n!=0)
			{
				static int mod = n%2;
				static int ans = mod +10*(printBinary(n/2) );
				cout <<ans ;
				
			}
		}

	
	
	
	

}

int main ()
{
	int n = 43;
	printBinary(n);
	
}
