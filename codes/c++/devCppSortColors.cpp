#include <bits/stdc++.h>
using namespace std;

int main(){

        vector<int> nums;
        nums.push_back(2);
        nums.push_back(0);
        nums.push_back(2);
        nums.push_back(1);
        nums.push_back(1);
        nums.push_back(0);
        
        vector<int> v1;
        
        
    for(int i =0; i<nums.size(); ++i){
        if(nums[i]==0){
            v1.push_back(nums[i]);
        }
 }
        
      for(int i =0; i<nums.size(); ++i){
        if(nums[i]==1){
            v1.push_back(nums[i]);
        }
	}
	
	    for(int i =0; i<nums.size(); ++i){
        if (nums[i]==2){
            v1.push_back(nums[i]);
        }
	}
        
 
    
   	nums.clear();
    for(int i=0;i<v1.size();++i){
    	nums.push_back(v1[i]);
        
        cout <<nums[i]<<endl;
        
    }
        
    
        


}
   /*
   class Solution {
public:
    void sortColors(vector<int>& nums) {
             
  vector<int> v1;
        
        
    for(int i =0; i<nums.size(); ++i){
        if(nums[i]==0){
            v1.push_back(nums[i]);
        }
 }
        
      for(int i =0; i<nums.size(); ++i){
        if(nums[i]==1){
            v1.push_back(nums[i]);
        }
	}
	
	    for(int i =0; i<nums.size(); ++i){
        if (nums[i]==2){
            v1.push_back(nums[i]);
        }
	}
        
 
    
   	nums.clear();
    for(int i=0;i<v1.size();++i){
    	nums.push_back(v1[i]);
        
        
        
    }
        
    }
};*/
