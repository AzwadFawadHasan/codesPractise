/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isMonotonic = function(nums) {
    var increasing =1
    var decreasing =1
    
    for (var i=0; i <nums.length-1; ++i){
        var j=i+1;
        if(nums[i] < nums[j]) increasing =0;
        if(nums[i] > nums[j]) decreasing =0;


    }
    return increasing||decreasing

    
};