#include <iostream>
using namespace std ;

void findPrime(int i){

    if(i >100) return;

    bool isPrime = true;
    for(int j = 2;j < i ;++j){
	if(i%j == 0){isPrime = false;}}

    if(isPrime) cout<<i<<"is prime"<<endl;
    else cout<<i<<"is not prime"<<endl;

    findPrime(++i);
}

int main ()
{
	int i =20
	;
	findPrime(i)
;	
}
