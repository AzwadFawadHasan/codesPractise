//parameterMystery1X
/*
main's a variable is stored at address 0xaa00
main's b variable is stored at address 0xbb00
main's c variable is stored at address 0xcc00
main's d variable is stored at address 0xdd00
main's e variable is stored at address 0xee00
any memory dynamically allocated on the heap will be at address 0x555500

*/



#include<iostream>
#include<conio.h>
using namespace std;

/*
   int main()
    {
     int arr[5],i;
     int *p=arr;
     cout<<"Enter five numbers separated by space:";
     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     cout<<"Your numbers are:\n";
     for(i=4;i>=0;i--)
        cout<<*(p+i)<<endl;
    
     getch();
     return 0;
 
    }



*/






/*
#include <iostream>
using namespace std ;

int main ()
{
	int m=0;
	int n, o ;
	int *z=&m;
	
cout <<"	z stores the address of m  = "<< z<< endl;                                                                 
                                                                                                              
cout <<" *z stores the value of m = 10     "<< *z<< endl;                                                                              
                                                                                                              
cout <<" &m is the address of m = 0x7ffd40630d44     "<< &m<< endl;                                                                    
                                                                                                              
cout <<" &n stores the address of n = 0x7ffd40630d48   "<< &n<< endl;                                                                  
                                                                                                              
cout <<" &o  stores the address of o = 0x7ffd40630d4c  "<< &o<< endl;                                                                  
                                                                                                              
cout <<" &z stores the address of z = 0x7ffd40630d50 "<< &z<< endl;   
	
}
*/


int p(int a, int &b, int *c)
{
	b++
	;a+=*c;
	cout << b<<" "<<*c<<" "<<a<<" "<<c <<endl;
	c=&a;
	return a-b;
	
}

int main ()
{
	int a=4;
	int *b = new int (8);
	int c=-3;
	int d;
	int *e = &a;
	
cout <<" main's a variable is stored at address 0xaa00  "<<&a<<endl;
cout <<"main's b variable is stored at address 0xbb00  "<<&b<<endl;
cout <<"main's c variable is stored at address 0xcc00	"<<&c<<endl; 
cout <<"main's d variable is stored at address 0xdd00	"<<&d<<endl;
cout <<"main's e variable is stored at address 0xee00	"<<&e<<endl;
cout <<"any memory dynamically allocated on the heap will be at adreess 0x555500 "<<&b<<endl;	
	d= p(a,*b,&c);
	p(c,d,b);
	p(*b,*e,&d);
	cout <<a<<" "<<b <<" "<< *b <<" " << c <<" "<<d<<" "<<e<<" "<<*e<<endl;
	cout<< &a<<" "<< &b<<" "<<&c<<" "<<&d<<" "<<&e<<endl; 
	
}


