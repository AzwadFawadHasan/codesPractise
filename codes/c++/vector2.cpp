// C++ program to sort a vector in non-decreasing
// order.
#include <bits/stdc++.h>
#include <iostream>

#include <iostream>

#include <vector>
using namespace std;

int main(){
    //vector like an array
    //can change size dynamically
    vector<int> v1 = {1,31,2,31};//creating a vector
    cout<<"SIZE OF VECTor" <<v1.size()<<endl;
    cout <<v1.size()/2 <<endl;

    for(int i =0; i<v1.size(); ++i){
        cout<< v1[i] << endl;
    }
   cout <<"-------------------------------------\n";
    
    sort(v1.begin(), v1.end());

    for(int i =0; i<v1.size(); ++i){
        cout<< v1[i] << endl;
    }
  

}
