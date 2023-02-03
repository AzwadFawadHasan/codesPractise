#include <iostream>
using namespace std ;

void findEven(int i){
	if(i > 10) return ;
	if( i%2 == 0) cout << i <<endl;
         findEven(++i);
}

int main( ){
	findEven(5);
	return 0;
}

