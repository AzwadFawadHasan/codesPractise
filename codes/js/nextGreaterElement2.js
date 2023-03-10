/**
 * @param {number[]} nums
 * @return {number[]}
 */
var nextGreaterElements = function(nums) {
    var ans = []
    var toggle =0;
    for(var i =0; i<nums.length;++i){
        let curr = nums[i]
        for(var j =i+1; j<=nums.length-1; ++j){
            let next = nums[j]
            if(next>curr){
                ans.push(next)
                toggle=1;
                break;
            }
        }
        if(toggle==0){
            for(var j =0; j<=i; ++j){
            let next = nums[j]
            if(next>curr){
                ans.push(next)
                toggle=1;
                break;
            }
         }
        }
        if(toggle!=1){
            ans.push(-1)
        }
            toggle=0;
        
        
    }
    return ans
    
};

/*
var loopCount = 0
    var ans =[]
    let j=0;
    let toggle =0
    let pushed =0
    while(loopCount != nums.length){
        for(var i =0 ; i< nums.length;++i){
            let curr = nums[i]
            if(toggle==0){
               j=i+1;
               toggle=1

            }

            if(j==nums.length && toggle ==1){
                j=0;
            }
            else{
                j++;
            }

            if(nums[j]>curr){
                ans.push(nums[j])
                pushed=1;
                loopCount++;
                toggle=1
                break
            }
            else if (pushed==1 && i==j){
                ans.push(nums[j])
                toggle=1
                loopCount++;

            }


        }
    }
    return ans

*/