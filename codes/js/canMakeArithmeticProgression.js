/**
 * @param {number[]} arr
 * @return {boolean}
 const points = [40, 100, 1, 5, 25, 10];
points.sort(function(a, b){return a - b});
 */
var canMakeArithmeticProgression = function(arr) {
    arr.sort(function(a, b){return a - b});
    if(arr.length>=2){
        var diff=arr[1]-arr[0];
    }
    for(var i =1; i<arr.length-1;++i){
        var currDiff=arr[i+1]-arr[i];
        if(Math.abs(diff)!=Math.abs(currDiff)){
            return false;
        }
    }
    return true;
    //3,5,1
    //5,3,1
    //5,1,3
    //1,5,3
    
    //abc
    //b-a=diff
    //
    //var diff=0;
    //for(var i =0; i<arr.length;++i){
    //    var temp =arr[i];
    //    if(i!=arr.length-1){
    //        var temp2=arr[i+1];
    //    }
    //    diff=temp2-temp;
//
    //}
//
    //
};