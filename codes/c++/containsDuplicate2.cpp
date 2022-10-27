
// C++ program to sort a vector in non-decreasing
// order.
#include <bits/stdc++.h>
#include <iostream>

#include <iostream>

#include <vector>
using namespace std;

int main(){
    class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0){return false;}
        vector <pair <int, int>> v1;
        int i=0;
        for(i;i<nums.size();++i){
            v1.push_back(make_pair(nums[i],i));
        }
        sort(v1.begin(),v1.end());i=0;
        for(i;i<v1.size()-1;++i){
            if((v1[i].first == v1[i+1].first) && (abs(v1[i].second - v1[i+1].second)<=k)){
                return true;
            }
        }
        return false;

};
    
};


}
