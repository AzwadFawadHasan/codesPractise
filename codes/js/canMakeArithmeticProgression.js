/**
 * @param {number[]} arr
 * @return {boolean}
 */
 var canMakeArithmeticProgression = function(arr) {
    
    arr.sort(function(a, b){return a - b});
    var d = arr[1]-arr[0];
    for(var i =1; i<arr.length -1 ; ++i){
        if(d!= (arr[i+1]-arr[i])){
            return false;
        }
    }
    return true;
};