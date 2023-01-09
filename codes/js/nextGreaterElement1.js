/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var nextGreaterElement = function(nums1, nums2) {
    var nextGreaterElement = function(nums1, nums2) {
    let result = [];
    for(let num of nums1)
    {
        let flag=-1;
        for(let i=nums2.indexOf(num)+1;i<nums2.length;i++)
        {
            if(nums2[i]>num)
            {
                flag=nums2[i];
                break;
            }
        }
        result.push(flag);
    }
    return result;

    //var res= [];
    //for(var i=0;i<nums1.length;++i){
    //    let flag=-1;
    //    for(let j=nums2[i]+1;j<nums2.length;++j){
    //        if(nums2[j]>nums1[i]){
    //            flag=nums2[i];
    //            break;
    //        }
    //    }
    //    res.push(flag)
    //}
    //return res;
    //var res=[];
    //for(var i =0; i<nums1.length;++i){
    //    for(var j=0; j<nums2.length;++j){
    //        if(nums1[i]==nums2[j]){
    //            if(nums2[j+1]){
    //                //j+1 exisits
    //                if(nums2[j+1]>nums2[j]){
    //                    res.push(nums2[j+1]);
    //                }
    //                else {
    //                    let max=nums2[j];
    //                    for(var k=j+1; k<nums2.length;++k){
    //                        if(nums2[k]>max){
    //                            max=nums2[k]
    //                        }
    //                    }
    //                    if(max>nums2[j]){
    //                        res.push(max)
    //                    }else{
    //                        res.push(-1)
    //                    }
    //                }
    //            }
    //            else{
    //                res.push(-1)
    //            }
    //        }
    //    }
    //}
    //return res;
    
};