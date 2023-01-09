/**
 * @param {number[]} arr
 * @return {number}
 */
var sumOddLengthSubarrays = function(arr) {
    var sum, totalSum=0;
    var size=1;
    while(size<=arr.length){
        sum =0;
        for(var i =0; i<=arr.length-size;++i){
            for(var j=i; j<i+size;j++){
                sum+=arr[j]
            }
        }
        totalSum+=sum;
        size+=2;
    }
    return totalSum;
    //var oddArr=[];
    //for(var i=1;i<=arr.length;++i){
    //    if(i%2!=0){
    //        oddArr.push(i);
    //    }
    //    
    //}
    ////for(var i=0;i<oddArr.length;++i){
    ////   console.log(oddArr[i])
    ////    
    ////}
    //var sum=0;
    //for(var i=0;i<oddArr.length;++i){
    //   var oddArrVal = oddArr[i]
    //   for(var a=0; a<arr.length;++a){
    //       for(var b=a;b<a+oddArrVal;++b){
    //           sum+=arr[b];
    //       }
    //   }
    //    
    //}
    //return sum

    

         

};