#include <bits/stdc++.h>
using namespace std;

int main(){

        vector<int> nums={2,0,2,1,1,0};
        vector<int> v1;
        int v1Counter=0;
        
    for(int i =0; i<nums.size(); ++i){
        if(nums[i]==0){
            v1[v1Counter]=nums[i];
            ++v1Counter;
        }
        else if(nums[i]==1){
            v1[v1Counter]=nums[i];
            ++v1Counter;
        }
        else if (nums[i]==2){
            v1[v1Counter]=nums[i];
            ++v1Counter;
        }
    }
    v1Counter=0;
        
    for(int i=0;i<v1.size();++i){
        nums[v1Counter]=v1[i];
        cout <<nums[v1Counter];
        ++v1Counter;
    }
        
    
        


}
   