#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
	string filename;bool ans;
	
	
	do{
		cin>> filename;
		fstream obj;
		obj.open(filename);
		ans = obj.fail();
	
    	}	while(ans);
		
		
	
		
	
}
