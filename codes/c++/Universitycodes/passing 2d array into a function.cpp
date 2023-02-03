

// A simple C++ program for traversal of a linked list 
#include <bits/stdc++.h> 
using namespace std; 
#include<iostream> 
using namespace std; 
void printGrades(int grades[][4],int numofSubjs,int numOfYear){
    
for(int i = 0; i < numOfYear; ++i){   

    for(int j = 0; j < numofSubjs; ++j){
   
         cout << grades[i][j] << " ";
   
     }
        cout<<endl;
    }
}

int main(){
   
  int numOfYear = 2;
  int numOfSubjs = 4;

  int grades[2][4] = {
			   {100,88,99,100},
    	   {99,92,95,94}
       };

  printGrades(grades, numOfSubjs, numOfYear);
  return 0;
}




/*
void mySwap(int &p, int &q){
	int temp = p;
	p = q;
	q = temp;
}
int main(){
	int a = 3; int b = 5;
	cout << "a: " << a << "b: " << b <<endl;
	mySwap(a,b);
	cout << "a: " << a << "b: " << b <<endl;
	return 0;
}
/*
void mySwap(int* &p, int* &q){
	int* temp = p;
	p = q;
	q = temp;
}
int main(){
int a = 3; int b = 5;
int* m = &a; int* n = &b; 
cout << "a: " << a << "b: " << b <<endl;
mySwap(m,n);
cout << "a: " << a << "b: " << b <<endl;

return 0;
}

*/


/*  
class Node { 
public: 
    int data; 
    Node* next; 
}; 
  
// This function prints contents of linked list 
// starting from the given node 
void printList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 
 
 // Driver code 
int main() 
{ 
    Node* head = NULL; 
    Node* second = NULL; 
    Node* third = NULL; 
  
    // allocate 3 nodes in the heap 
    head = new Node(); 
    second = new Node(); 
    third = new Node(); 
  
    head->data = 1; // assign data in first node 
    head->next = second; // Link first node with second 
  
    second->data = 200; // assign data to second node 
    second->next = third; 
  
    third->data = 3; // assign data to third node 
    third->next = NULL; 
  
    printList(head); 
  
    return 0; 
} 
  
// This is code is contributed by rathbhupendra 
*/

