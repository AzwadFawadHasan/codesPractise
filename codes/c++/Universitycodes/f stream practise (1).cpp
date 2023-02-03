#include <iostream>
#include <fstream>

using namespace std ;

int main ()
{
	
	cout <<" Welcome !" << endl;
	ifstream infile; 
	infile.open("xyz.txt");
	bool ans  = infile.fail();
cout << ans << endl;
}
