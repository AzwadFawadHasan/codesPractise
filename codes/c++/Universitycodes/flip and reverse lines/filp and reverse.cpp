#include <iostream>
#include <string>
#include <fstream>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	string name;bool ans; string line;
	
	ifstream infile;

	do{

	cout <<"Enter the filename that you want to open! \n";
	cin>>name;
	
	infile.open(name);
	ans=infile.fail();

	}	while(!ans);
	
	if(!ans)
	{
		cout<<"success opening file \n\n";
		while(infile,line)
		{
			cout<<line<<endl;
		}
	}





}

