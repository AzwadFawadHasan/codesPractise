


#include <bits/stdc++.h> 
using namespace std; 

void printGrades(int *grades[2],int numOfYear,int numofSubjs){

    for(int i = 0; i < numOfYear; ++i){

for(int j = 0; j < numofSubjs; ++j){

cout << grades[i][j] << " ";
       
 }
        cout << endl;
}
}

int main(){

int numOfYear = 2;int numOfSubjs = 4;

int *grades[numOfYear];

for(int i=0; i<numOfYear; ++i){

//C++ Dynamic Memory Allocation
grades[i] = new int[numOfSubjs];//for C++

if(grades[i] == NULL) {return 0;}//Checking space     
}
  //Value initialization
  for(int i=0;i < numOfYear; ++i){
    for(int j=0; j <numOfSubjs; ++j){
        grades[i][j] = (i+j);//Or any other value 
    }
  }
printGrades(grades,numOfYear,numOfSubjs);
//In C++ freeing memory
   for(int i = 0; i < numOfYear; ++i)
     delete[]grades[i];
return 0;
}



