/**
 * @param {number[]} nums
 * @return {number}
 */
var arraySign = function(nums) {
    //1 if +
    //-1 if -
    //0 if 0 

    //array = nums
    var product =1;
    var temp =0;

    for(var i =0; i <nums.length ; i++){
        temp=nums[i];
        product*=temp;
        
    }
    if(product>0){
        return 1
    }
    else if(product<0){
        return -1
    }else{
        return 0;
    }
};