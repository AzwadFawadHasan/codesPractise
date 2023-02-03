#include <bits/stdc++.h> 
using namespace std; 
  
// Recursive function to convert n 
// to its binary equivalent 
void decimalToBinary(int n) 
{ 
static int k =0;
    // Base case 
    if (n == 0) { 
        //cout << "0"; 
        return "0"; 
    } 
  
  else
    
	{// Recursive call 
	if (n<0)
	{
		n=n*-1;
		 k=1;
	}
    decimalToBinary(n / 2); 
    if (k==1)
    {cout << "-";
	}
    
    cout << n % 2; 
}

} 
  
// Driver code 
int main() 
{ 
    int n = -43; 
  
    decimalToBinary(n); 
  
    return 0; 
} 
