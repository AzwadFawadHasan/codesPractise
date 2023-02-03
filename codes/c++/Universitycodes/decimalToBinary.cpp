#include <iostream>
#include <cmath>
using namespace std ;

void decimalToBinary(int x)
{
	int n = x;
	int i=1;
	int a[i];
	int mod;
	int ans=0;
	
	int p=0;
	while (n>0)
	{
		mod =n%2;
		n=n/2;
		
			a[i]=mod;
			ans = ans + (mod)*( pow(10,p++));
			++i;
			
		
		
		
	}
	cout << ans;

	
}

int main ()
{
	
	int x = 43;
	decimalToBinary(x);
}
