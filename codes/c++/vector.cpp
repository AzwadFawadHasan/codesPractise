#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vector like an array
    //can change size dynamically
    vector<int> v1 = {1,2,3,4,5};//creating a vector
    cout<< v1[1]<<endl;
    cout<<v1.front()<<endl;//shows first element
    cout <<v1.back()<<endl;//shows last element
    cout << v1.size() <<endl;//shows no. of elements present in the vector
    cout << v1.capacity() <<endl;//shows the no of elements it can actually hold
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);

    //puh an element from the backof the vector
    //basically means adding to the end of vector
    cout <<"capacity= "<< v1.capacity() <<endl;//capacity increases by double
    cout <<"size= "<<v1.size()<<"\n after pop back"
    <<endl;

    v1.pop_back();//pop back removes one element from the back
    v1.shrink_to_fit();//shinks vector to fit to size so that it doesn't take any extra space

    cout <<"capacity= "<< v1.capacity() <<endl;//capacity increases by double
    cout <<"size= "<<v1.size()<<endl;
    //to insert an element we need a pointer to
    //the position of the element that we want to insert vefore
    //pointer to the first element is v1.begin () here
    v1.insert(v1.begin(), 5);
    cout<<v1[0]<<endl;
    v1.insert(v1.begin()+1, 8);
    
    cout<<v1[1]<<endl;
    //v1.begin() refers to position 0
    //v1.begi()+1 referes to positon 1
    cout <<v1[0]<<endl;
    v1.erase(v1.begin());
    cout <<v1[0]<<endl;

    //iterating through vectors
    for(int i =0; i<v1.size(); ++i){
        cout<< v1[i] << endl;
    }
    //or
    for(auto itr=v1.begin(); itr!=v1.end(); ++itr){
        cout<<*itr<<endl;
    }


}