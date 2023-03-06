/**
 * @param {number[]} nums
 * @param {number[]} l
 * @param {number[]} r
 * @return {boolean[]}
 */

 /*
 let result = [];
    for(let i=0;i<l.length;i++) {
        let subNums = [...nums].slice(l[i], r[i]+1);
        subNums = subNums.sort((a,b) => a-b);
        let diff = subNums[1]-subNums[0];
        let s = true
        for(let j=0;j<subNums.length-1;j++) {
            if(!(subNums[j+1]-subNums[j] == diff))
                s = false
        }
        result.push(s)
    }
    return result
 */
    var checkArithmeticSubarrays = function(nums, l, r) {

    

        let leftPointer = 0
        let rightPointer =0
        let c=0;
        let ans=[]
        var pushVar = true;
    
        while(leftPointer<l.length){
    
            let leftElement  = l[c]
            let rightElement = r[c]
            //let subNums = [...nums].slice(l[i], r[i]+1);
            let arr = nums.slice(leftElement, rightElement+1)
            arr.sort(function(a, b){return a - b});
            let diff = arr[1]-arr[0]
            
            for(var i=0; i<arr.length-1; ++i){
                let currDiff= arr[i+1] -arr[i]
                if(currDiff!=diff){
                    pushVar=false;
                }
            }
            
            ans.push(pushVar)
            pushVar = true;
            ++c;++leftPointer;++rightPointer;
            
    
        }
        return ans;
    
       
    
    };
    
    /*
    
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
        */