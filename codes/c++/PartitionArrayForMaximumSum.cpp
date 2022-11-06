#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr={15,7,9,2,5,10}; int k = 3;
    //[15,15,15,9,10,10,10]
    //cout <<arr.size()<<endl;
  
    sort(arr.begin(), arr.end(), greater<int>());
    //sort(arr.begin(), arr.end());
    cout <<"After sorting: ";
    for(auto x: arr){
        cout << x << " ";
    }
    cout<<endl;
    //for(int i = 0 ; i <arr.size() ; ++i){
    //    cout<<arr[i]<<endl;
    //}
    //if(mod==0){
    //    for()
    //}

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


    //while(k!=0){
    //    for(int i=0; i<arr.size();){
    //        if(arr[i]!=arr[--i]){
    //            maxValues.push_back(arr[i]);
    //            k=k-1;
    //            
    //        }
    //        ++i;
    //    }
    //}


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

    if(mod==0){
        while(div!=0){
            for(int i=0; i<k ;++i){
                
                result+=maxValues[count];
                cout <<"result after adding "<<result<<endl;
            }
            ++count;
            div=div-1;
        }
        cout<<"when only mod is 0 "<<result<<endl;
    }
    else if (mod!=0){
        while(div!=0){
            for(int i =0; i <k ;++i){
                result+=maxValues[count];
            }
            ++count;
            div-=1;
        }
        k-=count;
        while(mod!=0){
            for(int i =0; i <k ;++i){
                result+=maxValues[count];
            }
            ++count;
            mod-=1;
        }
        cout<<"when mod is not 0"<<result<<endl;

    }


}