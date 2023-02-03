#include <iostream>
using namespace std ;

void printBinary(int n)
{
	int mod=0;
	int ans=0;
	static int ncheck=0;
	int ans1 = 0;
 static	int c =0;
 
 
 if (n!=0)
	{
		mod=n%2;
		
		ans=ans+mod;
	//	cout <<ans;
	
		c++;
		//cout <<"\n c= "<< c << endl;
		if (c!=0)
		{
			mod*(10*(c-1));
			ans1=ans1+mod;
		}
		else
		{
			ans1=ans1+mod;
		}
		
		printBinary(n/2);
		
	cout << ans1;
		
		
	}
	
	else
	{
	//cout <<0<<endl;	
	
	}
	
	
	

}

int main ()
{
	int n = 43;
	printBinary(n);
	
}
