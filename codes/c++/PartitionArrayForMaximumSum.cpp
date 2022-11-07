#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr={15,7,9,2,5,10,3}; int k = 3;
    //[15,15,15,9,10,10,10]
    //cout <<arr.size()<<endl;
  
    sort(arr.begin(), arr.end(), greater<int>());
    //sort(arr.begin(), arr.end());
    cout <<"After sorting: ";
    for(auto x: arr){
        cout << x << " ";
    }
    cout << endl;
    
    vector<int> maxValues;
 
    for(int i=0; i<arr.size(); ++i){
        if((arr[i]>arr[i+1]) && (arr[i]!=arr[i+1])){
            if(k==0){
                break;
            }
            if(k!=0){
                k=k-1;
                maxValues.push_back(arr[i]);
                 
            }
           
        }
    }



    cout<<"maxValues ";
    for(auto x: maxValues){
        cout << x << " ";
    }
    cout <<endl;
    int result=0;
    
    int count=0;
    cout <<maxValues[0]<<endl;

    int mod = arr.size()%k;
    cout <<"MOD "<<mod<<endl;
    int div = arr.size()/k;
    cout <<"run "<<mod<<endl;

    return 0;
}

