/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    var lastZeroIndex=0;
    for(var i =0;i<nums.length;++i){
        if(nums[i]!=0){
            nums[lastZeroIndex]=nums[i];++lastZeroIndex;
        }
    }
    for(var i =lastZeroIndex;i<nums.length;++i){
        
            nums[i]=0;//++lastZeroIndex;
        
    }
    
};