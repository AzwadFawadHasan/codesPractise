#include <iostream>
using namespace std;

/*
Input:  [8, 58, 71, 18, 31, 32, 63,92, 43, 3, 91, 93, 25, 80, 28]
Output: [18, 63, 80, 25, 32, 43, 80,93, 80, 25, 93, -1, 28, -1, -1]

*/

int main ()
{
	int a[15]={8, 58, 71, 18, 31, 32, 63,92, 43, 3, 91, 93, 25, 80, 28};
	int i,j,k,curr,next;
	int rep;
	
	for (i=0; i < 15; i++)
	{
		curr = a[i];
		for (j=i+1; j< 15;j++)
		{
			if (curr < a[j])
			{
				next = a[j];
			}
			
			for (k=j+1; k<15;k++)
			{
				if (a[k]>curr)
				{
					if (a[k]<next)
					{
						rep= a[k];
					}
				}
			}
			
		}
		a[i]=rep;
		
	}
		
	for (i=0; i < 15; i++)
	{
		cout << a[i] <<"  ";
	}
}
