





#include <iostream>
#include <fstream>
using namespace std ;

int main ()
{
	
	char a [100];
	cout <<" Enter anything you want "<< endl;
	cin.getline(a, 100);
	
	fstream myfile ("xyz.txt", ios::app);
	myfile<<a;
	myfile.close();
	cout << "file creating, opening and writing successful ! \n ";
	
	cout << endl;
	char r[100];
	
	
	fstream obj;
	obj.open("xyz.txt");
	obj.getline(r,100);
	obj>>r;
	
	cout << "File reading "<< r<< endl;

	cout << "operation sucess"<< endl;
	obj.close();	 
}


/*

#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
    
   char data[100];
 
   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");
 
   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);
 
   // write inputted data into the file.
   outfile << data << endl;
 
   // close the opened file.
   outfile.close();
 
   // open a file in read mode.
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 
 
   // write the data at the screen.
   cout << data << endl;
   
   // close the opened file.
   infile.close();
}
*/
  
