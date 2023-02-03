// CPP program to implement hashing with chaining 
#include<bits/stdc++.h> 
#include <list>
#include <iterator>
using namespace std; 

class Hash 
{ 
	int BUCKET; // No. of buckets // number of buckets 

	// Pointer to an array containing buckets 
	list<int> *table; // list is like a container it can be accessed via both directions  	
public: 
	Hash(int V); // Constructor 

	// inserts a key into hash table 
	void insertItem(int x); 

	// deletes a key from hash table 
	void deleteItem(int key); 

	// hash function to map values to key 
	int hashFunction(int x) { 
		return (x % BUCKET); 
	} 

	void displayHash(); 
}; 

Hash::Hash(int b) // contructor 
{ 
	this->BUCKET = b; // this is a pointer to a constructor 
	table = new list<int>[BUCKET];// new int values are being created and store at various buckets 
} 

void Hash::insertItem(int key) 
{ 
	int index = hashFunction(key); 
	table[index].push_back(key); 
} 



// function to display hash table 
void Hash::displayHash() { 
for (int i = 0; i < BUCKET; i++) { 
	cout << i; 
	for (auto x : table[i]) 
	cout << " --> " << x; 
	cout << endl; 
} 
} 

// Driver program 
int main() 
{ 
// array that contains keys to be mapped 
int a[] = {15, 52, 13,19,77,66,44,90,81}; 
int n = sizeof(a)/sizeof(a[0]); 

// insert the keys into the hash table 
Hash h(10); // 7 is count of buckets in 
			// hash table 
for (int i = 0; i < n; i++) 
	h.insertItem(a[i]); 

// delete 12 from hash table 


// display the Hash table 
h.displayHash(); 

return 0; 
} 

