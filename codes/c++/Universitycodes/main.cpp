#include<iostream>    
using namespace std;      

void rec(int n)
{
	int  a=0,b=1,r;

	//a=0;
	//b=1;
	if(n>0)
	{
		r=a+b;
		a=b;
		b=r;
		cout <<r<<" ";
		n=n-1;
		rec(n);
		
	}
}


int main(){    
    int n;    
    cout<<"Enter the number of elements: ";    
    cin>>n;    
    cout<<"Fibonacci Series: ";    
    cout<<"0 "<<"1 "; 
	n=n-2; 
    rec(n);  //n-2 because 2 numbers are already printed    
     return 0;  
}


/*
void printFibonacci(int n){    
    static int n1=0, n2=1, n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
 cout<<n3<<" ";    
         printFibonacci(n-1);    
    }    
}    
int main(){    
    int n;    
    cout<<"Enter the number of elements: ";    
    cin>>n;    
    cout<<"Fibonacci Series: ";    
    cout<<"0 "<<"1 ";  
    printFibonacci(n-2);  //n-2 because 2 numbers are already printed    
     return 0;  
}  
*/
