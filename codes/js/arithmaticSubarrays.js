/**
 * @param {number[]} nums
 * @param {number[]} l
 * @param {number[]} r
 * @return {boolean[]}
 */
var checkArithmeticSubarrays = function(nums, l, r) {

   

    let i=0;
    let j=0;
    let c=0;
    let ans=[]
    while(j!=r.length){
        i=l[c]
        j=r[c]
        let arr= nums.slice(i,j)
        arr.sort(function(a, b){return b - a});
        let diff = arr[1]-arr[0]
        let flag = true
        for(var k=1; k<arr.length-1;++k){
            let currDiff = arr[k+1]-arr[k]
            if(currDiff != diff ){
                flag=false
            }
        }
        if(flag==false){
            ans.push(false)
        }else{
            ans.push(true)
        }
        c++;
        j++
        i++
    }
    return ans
    
};